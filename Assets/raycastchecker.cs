using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class raycastchecker : MonoBehaviour
{
    [SerializeField]
    GameObject controller;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        Vector3 fwd = controller.transform.TransformDirection(Vector3.forward);
        RaycastHit hitInfo;

        Debug.DrawRay(controller.transform.position, (fwd * 10), Color.green);

        if(Physics.Raycast(controller.transform.position, fwd, out hitInfo, 20)){
            Debug.Log(hitInfo.collider.gameObject.name);
        }
    }
}
