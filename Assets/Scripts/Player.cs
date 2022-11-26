using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;
using UnityEngine.UI;
//using Tabtale.TTPlugins;

public class Player : MonoBehaviour
{
    public bool CameraFollow = true;
    public bool canMove = true;
    public bool HasChargingCable;
    public Transform DirectionControllerParent;
    private Transform DirectionControllerChild;
    public Animator Anim;
    public Vector3 CameraOffset;
    public float Speed;
    public List<GameObject> StackedBlocks;
    public GameObject ChargingPlug;
    public Transform StackPos;
    public GameObject UpgradeMenu;

    public float WaterLevel = 1f;
    public float SubtractionInterval = 0.1f;
    public float AdditionInterval = 0.1f;
    public float SubtractionValue = 0.1f;
    public float AdditionValue = 0.1f;
    public bool Deplete;
    public bool Fill;
    public Image WaterLevelIndicator;
    public Image[] WaterLevelIndicatorBag;
    public Text WaterLevelText;
    public List<GameObject> CleaningSystem;

    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine(WaterDepletionRoutine());
        StartCoroutine(WaterFillRoutine());
        if (Anim == null)
            Anim = GetComponent<Animator>();
        DirectionControllerChild = DirectionControllerParent.GetChild(0);
        Application.targetFrameRate = 60;
    }

    private void Awake()
    {
    // Initialize CLIK Plugin
    //TTPCore.Setup();
    // Your code here
    }

    // Update is called once per frame
    void Update()
    {
        DirectionControllerParent.position = transform.position;
        WaterLevelIndicator.fillAmount = WaterLevel;
        foreach(Image w in WaterLevelIndicatorBag)
        {
            w.fillAmount = WaterLevel;
        }
        WaterLevelText.text = Mathf.Ceil(WaterLevel / 1 * 100).ToString() + "%";
        /*Wobble w = FindObjectOfType<Wobble>();
        w.Fill = (WaterLevel - 0.7f) / (0.3f - 0.7f);*/

        if(WaterLevel <= 0)
        {
            foreach(GameObject g in CleaningSystem)
            {
                g.SetActive(false);
            }
        }
        else
        {
            foreach (GameObject g in CleaningSystem)
            {
                g.SetActive(true);
            }
        }

        //Bounds For Direction Controller
        DirectionControllerChild.localPosition = new Vector3(Mathf.Clamp(DirectionControllerChild.localPosition.x, -1.25f, 1.25f),
            DirectionControllerChild.localPosition.y,
            Mathf.Clamp(DirectionControllerChild.localPosition.z, -1.25f, 1.25f));

        /*if(StackedBlocks.Count > 0 || HasChargingCable == true)
        {
            Anim.SetBool("HasStack", true);
        }
        else
        {
            Anim.SetBool("HasStack", false);
        }*/

        if(Input.touchCount > 0 && canMove == true)
        {
            //Move Direction Controller
            Touch touch = Input.GetTouch(0);
            DirectionControllerChild.position = new Vector3(DirectionControllerChild.position.x + touch.deltaPosition.x * Time.deltaTime,
            DirectionControllerChild.position.y,
            DirectionControllerChild.position.z + touch.deltaPosition.y * Time.deltaTime);
            
            //Look At Direction Controller
            transform.LookAt(DirectionControllerChild.position);
            Anim.SetBool("Run", true);
        }
        else
        {
            DirectionControllerChild.localPosition = new Vector3(0, 0, 0);
            Anim.SetBool("Run", false);
        }

        if(GameObject.Find("CashText") != null)
        {
            Text t = GameObject.Find("CashText").GetComponent<Text>();
            t.text = PlayerPrefs.GetInt("Money").ToString();
        }
    }

    private void FixedUpdate()
    {
        // Move Towards Direction Controller
        transform.position = Vector3.MoveTowards(transform.position, DirectionControllerChild.position, Speed);
    }
    
    private void LateUpdate()
    {
        //Camera Follow System
        if(CameraFollow == true)
            Camera.main.transform.position = transform.position + CameraOffset;
    }

    private void OnTriggerEnter(Collider other) 
    {
        if(other.gameObject.tag == "PackageArea1" && HasChargingCable == false)
        {
            StackObj[] s = other.transform.GetComponentsInChildren<StackObj>();
            foreach(StackObj x in s)
            {
                StackedBlocks.Add(x.gameObject);
                StartCoroutine(StackBoxes(other));
                x.MoveToPos = new Vector3(0, 0.7f * StackedBlocks.Count - 1, 0);
            }
        }

        if(other.gameObject.tag == "DepositArea1" && HasChargingCable == false)
        {
            if(StackedBlocks.Count > 0)
            {
                Transform[] x = other.transform.GetComponentsInChildren<Transform>();
                List<Transform> t = new List<Transform>();
                /*for(int i = 1; i < x.Length; i++)
                {
                    if(x[i].childCount == 0)
                        t.Add(x[i]);
                }*/

                for(int i = 0; i < other.transform.childCount; i++)
                {
                    if(other.transform.GetChild(i).childCount == 0)
                    {
                        t.Add(other.transform.GetChild(i));
                    }
                }

                Debug.Log("I count " + t.Count + " slots");
                StartCoroutine(UnstackBoxes(t, other));
            }
        }

        if(other.tag == "UpgradeArea")
        {
            UpgradeMenu.SetActive(true);
        }

        if (other.tag == "CleaningArea")
        {
            Deplete = true;
        }

        if(other.tag == "WaterRefillArea")
        {
            Fill = true;
        }
    }

    private void OnTriggerExit(Collider other) 
    {
        if(other.tag == "UpgradeArea")
        {
            UpgradeMenu.SetActive(false);
        }

        if (other.tag == "CleaningArea")
        {
            Deplete = false;
        }

        if (other.tag == "WaterRefillArea")
        {
            Fill = false;
        }
    }

    public void OnTriggerStay(Collider other)
    {
        /*if(other.tag == "CleaningArea")
        {
            StartCoroutine(WaterDepletionRoutine());
        }*/
    }

    public IEnumerator WaterDepletionRoutine()
    {
        while(true)
        {
            yield return new WaitForSeconds(SubtractionInterval);
            if(Deplete == true)
            {
                if (WaterLevel > 0)
                {
                    WaterLevel -= SubtractionValue;
                }
            }

            if(WaterLevel < 0)
            {
                WaterLevel = 0;
            }
        }
    }

    public IEnumerator WaterFillRoutine()
    {
        while (true)
        {
            yield return new WaitForSeconds(AdditionInterval);
            if (Fill == true)
            {
                if (WaterLevel < 1)
                {
                    WaterLevel += AdditionValue;
                }
            }

            if (WaterLevel > 1)
            {
                WaterLevel = 1;
            }
        }
    }

    public IEnumerator StackBoxes(Collider other)
    {
        other.GetComponent<Collider>().enabled = false;
        for(int i = 0; i < StackedBlocks.Count; i++)
        {
            yield return new WaitForSeconds(0.1f);
            StackedBlocks[i].transform.parent = StackPos;
            StackedBlocks[i].transform.localEulerAngles = new Vector3(270, 0, 0);
            StackedBlocks[i].GetComponent<StackObj>().ShouldMove = true;
        }
    }

    public IEnumerator UnstackBoxes(List<Transform> t, Collider other)
    {
        Collider c = other.GetComponent<Collider>();
        c.enabled = false;
        GetComponent<Collider>().enabled = false;
        //other.GetComponent<Collider>().enabled = false;
        StackedBlocks.Reverse();
        int ExNum = 0;
        if(t.Count > StackedBlocks.Count)
        {
            ExNum = StackedBlocks.Count;
        }
        else
        {
            ExNum = t.Count;
        }

        for(int j = 0; j < ExNum; j++)
        {
            yield return new WaitForSeconds(0.1f);
            StackedBlocks[j].transform.parent = t[j].transform;
            StackedBlocks[j].GetComponent<StackObj>().MoveToPos = new Vector3(0, 0, 0);
            StackedBlocks[j].transform.localEulerAngles = new Vector3(0, 0, 0);
            StackedBlocks[j].GetComponent<StackObj>().ShouldMove = true;
            StackedBlocks[j] = null;
        }

        if(ExNum != t.Count)
        {
            c.enabled = true;
        }
        
        //Remove all null objs from list
        StackedBlocks = StackedBlocks.Where(item => item != null).ToList();
        StackedBlocks.Reverse();
        GetComponent<Collider>().enabled = true;
    }
}
