using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AnimController : MonoBehaviour
{
    [Header("Scaling up animation : ")]
    public bool ScaleObj;
    public Vector3 ScaleTo;

    [Header("Moving to animation : ")]
    public bool MoveObj;
    public Vector3 MoveTo;

    public float LerpSpeed = 5f;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if(ScaleObj == true)
        {
            transform.localScale = Vector3.Lerp(transform.localScale, ScaleTo, Time.deltaTime * LerpSpeed);
        }

        if(MoveObj == true)
        {
            transform.localPosition = Vector3.Lerp(transform.localPosition, MoveTo, Time.deltaTime * LerpSpeed);
        }
    }

    public void MoneyAnimComplete()
    {
        PlayerPrefs.SetInt("Money", PlayerPrefs.GetInt("Money", 100) + FindObjectOfType<MoneySpawner>().MoneyEarned);
        Destroy(gameObject);
    }
}
