using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using Tabtale.TTPlugins;

public class LevelManager : MonoBehaviour
{
    public List<GameObject> Levels;

    private void Awake()
    {
        // Initialize CLIK Plugin
        TTPCore.Setup();
        // Your code here
    }

    // Start is called before the first frame update
    void Start()
    {
        if (PlayerPrefs.GetInt("LevelNum") > Levels.Count - 1)
        {
            PlayerPrefs.SetInt("LevelNum", 0);
        }
        Levels[PlayerPrefs.GetInt("LevelNum", 0)].SetActive(true);
    }

    public void NextLevel()
    {
        PlayerPrefs.SetInt("LevelNum", PlayerPrefs.GetInt("LevelNum") + 1);
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
    }
}