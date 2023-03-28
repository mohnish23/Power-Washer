using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LeafRandomizer : MonoBehaviour
{
    public Color32[] ColorList;
    public Animator LeafAnim;
    public bool hasBeenHit;
    public string[] AnimNames;
    public bool isLeaf = true;

    // Start is called before the first frame update
    void Start()
    {
        if(isLeaf == true)
        {
            LeafAnim = GetComponentInParent<Animator>();
            GetComponent<Renderer>().material.color = ColorList[Random.Range(0, ColorList.Length)];
        }
    }

    // Update is called once per frame
    void Update()
    {
        if(hasBeenHit == true && isLeaf == true)
        {
            LeafAnim.Play(AnimNames[Random.Range(0, AnimNames.Length)]);
            hasBeenHit = false;
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        if(other.tag == "LeafBlower" && isLeaf == true)
        {
            hasBeenHit = true;
        }

        if(other.tag == "GrassCutter" && isLeaf == false)
        {
            GetComponent<Animator>().Play("GrassAnim");
        }
    }
}
