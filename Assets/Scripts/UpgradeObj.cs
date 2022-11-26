using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UpgradeObj : MonoBehaviour
{
    public List<GameObject> UpgradeLevels;
    public string UpgradeName;

    // Start is called before the first frame update
    void Start()
    {
        for(int i = 0; i < transform.childCount; i++)
        {
            UpgradeLevels.Add(transform.GetChild(i).gameObject);
        }

        UpgradeName = gameObject.name + "_Level";

        InitUpgrade();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void InitUpgrade()
    {
        foreach(GameObject g in UpgradeLevels)
        {
            g.SetActive(false);
        }

        UpgradeLevels[PlayerPrefs.GetInt(UpgradeName, 0)].SetActive(true);
    }
}
