using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AnnotateLineController : MonoBehaviour
{

    public bool annotating = true;

    private LineRenderer line;
    private Vector3 previousPosition;
    private Vector3 currentPosition;

    [SerializeField]
    GameObject controllerPosition;

    [SerializeField]
    private float minDistance = .1f;

    private void Start(){

        line = GetComponent<LineRenderer>();
        line.positionCount = 1;
        previousPosition = transform.position;

    }

    private void Update(){

        if(annotating == true){

            //grab the position of the controller
            currentPosition = controllerPosition.transform.position;

            if(Vector3.Distance(currentPosition, previousPosition) > minDistance){

                if(previousPosition == transform.position){
                    line.SetPosition(0, currentPosition);


                }
                else{
                    line.positionCount++;
                    line.SetPosition(line.positionCount - 1, currentPosition);
                }

                previousPosition = currentPosition;

            }

        }

    }


}
