using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UpgradeManager : MonoBehaviour
{
    public UpgradeObj SizeObj;
    public UpgradeObj CapacityObj;
    public Player player;

    public Text SizeLevel;
    public Text SizeValue;
    public Text CapacityLevel;
    public Text CapacityValue;
    public Text SpeedLevel;
    public Text SpeedValue;

    public Button SizeBtn;
    public Button CapacityBtn;
    public Button SpeedBtn;

    // Start is called before the first frame update
    void Start()
    {
        player = FindObjectOfType<Player>();
    }

    // Update is called once per frame
    void Update()
    {
        player.SubtractionInterval = PlayerPrefs.GetFloat("SubInterval", 0.1f);
        player.Speed = PlayerPrefs.GetFloat("Speed", 0.025f);

        SizeLevel.text = "Lv. " + PlayerPrefs.GetInt("SizeLevel", 1).ToString();
        SizeValue.text = PlayerPrefs.GetInt("SizeValue", 2000).ToString();
        CapacityLevel.text = "Lv. " + PlayerPrefs.GetInt("CapacityLevel", 1).ToString();
        CapacityValue.text = PlayerPrefs.GetInt("CapacityValue", 1000).ToString();
        SpeedLevel.text = "Lv. " + PlayerPrefs.GetInt("SpeedLevel", 1).ToString();
        SpeedValue.text = PlayerPrefs.GetInt("SpeedValue", 1000).ToString();

        if(PlayerPrefs.GetInt("SizeValue", 2000) > PlayerPrefs.GetInt("Money"))
        {
            SizeBtn.interactable = false;
        }
        else
        {
            SizeBtn.interactable = true;
        }

        if (PlayerPrefs.GetInt("CapacityValue", 1000) > PlayerPrefs.GetInt("Money"))
        {
            CapacityBtn.interactable = false;
        }
        else
        {
            CapacityBtn.interactable = true;
        }

        if (PlayerPrefs.GetInt("SpeedValue", 1000) > PlayerPrefs.GetInt("Money"))
        {
            SpeedBtn.interactable = false;
        }
        else
        {
            SpeedBtn.interactable = true;
        }

        if(Input.GetKeyDown(KeyCode.K))
        {
            PlayerPrefs.SetInt("Money", PlayerPrefs.GetInt("Money") + 8000);
            SizeUpgrade();
            CapacityUpgrade();
            SpeedUpgrade();
        }
    }

    public void SizeUpgrade()
    {
        //if the final upgrade is not active -> increment upgrade number
        if (SizeObj.UpgradeLevels[SizeObj.UpgradeLevels.Count - 1].activeInHierarchy == false)
            PlayerPrefs.SetInt(SizeObj.UpgradeName, PlayerPrefs.GetInt(SizeObj.UpgradeName) + 1);
        SizeObj.InitUpgrade();

        PlayerPrefs.SetInt("Money", PlayerPrefs.GetInt("Money") - PlayerPrefs.GetInt("SizeValue", 2000));
        PlayerPrefs.SetInt("SizeValue", PlayerPrefs.GetInt("SizeValue", 2000) + 1000);
        PlayerPrefs.SetInt("SizeLevel", PlayerPrefs.GetInt("SizeLevel", 1) + 1);
    }

    public void CapacityUpgrade()
    {
        if (CapacityObj.UpgradeLevels[CapacityObj.UpgradeLevels.Count - 1].activeInHierarchy == false)
            PlayerPrefs.SetInt(CapacityObj.UpgradeName, PlayerPrefs.GetInt(CapacityObj.UpgradeName) + 1);
        CapacityObj.InitUpgrade();
        PlayerPrefs.SetFloat("SubInterval", PlayerPrefs.GetFloat("SubInterval", 0.1f) + 0.1f);
        player.SubtractionInterval = PlayerPrefs.GetFloat("SubInterval");

        PlayerPrefs.SetInt("Money", PlayerPrefs.GetInt("Money") - PlayerPrefs.GetInt("CapacityValue", 1000));
        PlayerPrefs.SetInt("CapacityValue", PlayerPrefs.GetInt("CapacityValue", 1000) + 500);
        PlayerPrefs.SetInt("CapacityLevel", PlayerPrefs.GetInt("CapacityLevel", 1) + 1);
    }

    public void SpeedUpgrade()
    {
        PlayerPrefs.SetFloat("Speed", PlayerPrefs.GetFloat("Speed", 0.02f) + 0.005f);

        PlayerPrefs.SetInt("Money", PlayerPrefs.GetInt("Money") - PlayerPrefs.GetInt("SpeedValue", 1000));
        PlayerPrefs.SetInt("SpeedValue", PlayerPrefs.GetInt("SpeedValue", 1000) + 500);
        PlayerPrefs.SetInt("SpeedLevel", PlayerPrefs.GetInt("SpeedLevel", 1) + 1);
    }
}
