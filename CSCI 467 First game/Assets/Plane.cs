using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Plane : MonoBehaviour
{


    public Rigidbody rb;

    // Start is called before the first frame update
    void Start()
    {
        Debug.Log("Hello people who watch my snapchat stories");

        rb.useGravity = false;
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
