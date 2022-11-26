using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MoneySpawner : MonoBehaviour
{
    public Text CleaningProgressTxt;
    public int CleaningProgress;
    private int PrevCleaningProgress;

    public GameObject Money;
    public Transform MoneySpawnPos;
    public Transform MainCanvas;

    public Text MoneyText;

    [Header("Amount Earned Per % :")]
    public int MoneyEarned;

    public void Awake()
    {
        PrevCleaningProgress = CleaningProgress;
    }

    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        MoneyText.text = PlayerPrefs.GetInt("Money", 100).ToString();
        CleaningProgress = int.Parse(CleaningProgressTxt.text.Substring(0, CleaningProgressTxt.text.Length - 1));

        if (PrevCleaningProgress != CleaningProgress)
        {
            PrevCleaningProgress = CleaningProgress;
            Instantiate(Money, MainCanvas);
        }
    }
}
