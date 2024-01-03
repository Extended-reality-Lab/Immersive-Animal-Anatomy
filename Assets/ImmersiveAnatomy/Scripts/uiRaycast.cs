using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UIRaycast : MonoBehaviour
{
    Ray ray;
    public LayerMask layerMask;
    int maxDistance = 100;
    // Start is called before the first frame update
    void FixedUpdate()
    {
        ray= new Ray(transform.position, transform.forward);
        CheckCollisions();
        Debug.DrawRay(ray.origin, ray.direction * maxDistance, Color.red);
    }

    void CheckCollisions()
    {
        RaycastHit hit;
        if (Physics.Raycast(ray, out hit, maxDistance, layerMask))
        {
            Debug.Log(hit.collider.gameObject.name+ " is selected");
           
        }
    }

}
