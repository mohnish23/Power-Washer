using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameManager : MonoBehaviour
{
    public Text CleaningProgressTxt;
    public int CleaningProgress;
    private bool Run = true;
    private Vector3 Pos;
    public Vector3 CameraMovePos;
    public GameObject GameUI;
    public GameObject LevelCompleteMenu;
    public GameObject[] LevelCompleteObjs;    

    // Start is called before the first frame update
    void Start()
    {
        Pos = Camera.main.transform.position;
    }

    // Update is called once per frame
    void Update()
    {
        if(Run == true)
            CleaningProgress = int.Parse(CleaningProgressTxt.text.Substring(0, CleaningProgressTxt.text.Length - 1));

        if(CleaningProgress >= 100)
        {
            StartCoroutine(LevelCompleteRoutine());
        }

        Camera.main.transform.position = Vector3.Lerp(Camera.main.transform.position, Pos, Time.deltaTime * 2f);

        if(Input.GetKeyDown(KeyCode.Space))
        {
            ScreenCapture.CaptureScreenshot("ScreenShot.png");
        }
    }

    public IEnumerator LevelCompleteRoutine()
    {
        Run = false;
        CleaningProgress = 0;
        FindObjectOfType<Player>().CameraFollow = false;
        FindObjectOfType<Player>().enabled = false;
        yield return new WaitForSeconds(0.1f);
        FindObjectOfType<Player>().gameObject.SetActive(false);
        Pos = CameraMovePos;
        yield return new WaitForSeconds(0.1f);
        GameUI.SetActive(false);
        LevelCompleteMenu.SetActive(true);
        foreach(GameObject g in LevelCompleteObjs)
        {
            g.SetActive(true);
        }
    }
}
