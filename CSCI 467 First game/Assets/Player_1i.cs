using System.Collections;
using System.Collections.Generic;
using System.Threading;
using UnityEngine;

public class Player_1i : MonoBehaviour
{

    public Rigidbody rb;

   

    


    // Start is called before the first frame update
    void Start()
    {
        Debug.Log("Hello people who watch my snapchat stories");

        rb.useGravity = false;
      
        
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        rb.AddForce(0, 0, 2000 * Time.deltaTime);

    }
}
