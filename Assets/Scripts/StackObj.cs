using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StackObj : MonoBehaviour
{
    public bool ShouldMove;
    public Vector3 MoveToPos;
    public bool isConveyorPackage;
    public bool shouldLookAtOrigin;

    public int LookDir;
    public GameObject ChargingCable;
    public int ChargingCableType;

    // Start is called before the first frame update
    void Start()
    {
        MoveToPos = transform.position;
    }

    // Update is called once per frame
    void Update()
    {
        if(ShouldMove == true)
        {
            transform.localPosition = Vector3.Lerp(transform.localPosition, MoveToPos, Time.deltaTime * 8f);
        }

        if(shouldLookAtOrigin == true)
        {
            /*GameObject pos = FindObjectOfType<ScaleDrag>().StartPos;
            
            if(LookDir == 0)
                transform.LookAt(pos.transform, Vector3.up);
            else if(LookDir == 1)
                transform.LookAt(pos.transform, Vector3.down);
            else if(LookDir == 2)
                transform.LookAt(pos.transform, Vector3.forward);
            else if(LookDir == 3)
                transform.LookAt(pos.transform, Vector3.back);
            else if(LookDir == 4)
                transform.LookAt(pos.transform, Vector3.left);
            else if(LookDir == 5)
                transform.LookAt(pos.transform, Vector3.right);
            
            /*Vector3.forward Vector3.back Vector3.up Vector3.down Vector3.left Vector3.right*/
        }
    }

    private void OnTriggerEnter(Collider other) 
    {
        if(other.tag == "DepositArea1" && isConveyorPackage == true || other.tag == "DepositArea2" && isConveyorPackage == true)
        {
                Transform[] x = other.transform.GetComponentsInChildren<Transform>();
                List<Transform> t = new List<Transform>();
                for(int i = 0; i < other.transform.childCount; i++)
                {
                    if(other.transform.GetChild(i).childCount == 0)
                    {
                        t.Add(other.transform.GetChild(i));
                    }
                }

            if(t.Count > 0)
            {
                transform.parent = t[t.Count - 1];
                MoveToPos = new Vector3(0, 0, 0);
                transform.localEulerAngles = new Vector3(0, 0, 0);
                GetComponent<Rigidbody>().isKinematic = true;
                GetComponent<BoxCollider>().enabled = false;
                ShouldMove = true;
            }
        }

        if(ChargingCable != null)
        {
            ChargingCable.GetComponent<Animator>().Play("WireWobble");
        }
    }
}
