using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class AnnotateLineController : MonoBehaviour
{

    public InputActionReference drawButton;

    public bool annotating = true;

    private LineRenderer line;
    private GameObject lineObject;
    private Vector3 previousPosition;
    private Vector3 currentPosition;

    [SerializeField]
    GameObject linePrefab;

    [SerializeField]
    GameObject controllerPosition;

    [SerializeField]
    private float minDistance = .1f;

    private void Start(){

        drawButton.action.started += startedDraw;
        drawButton.action.canceled += endedDraw;

        //line = GetComponent<LineRenderer>();
        //line.positionCount = 1;
        //previousPosition = transform.position;

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

    void startedDraw(InputAction.CallbackContext ctx){
        //initialize a new line prefab, and set the annotating bool to true
        lineObject = Instantiate(linePrefab, new Vector3(0f, 0f, 0f), Quaternion.identity);
        line = lineObject.GetComponent<LineRenderer>();
        annotating = true;
    }

    void endedDraw(InputAction.CallbackContext ctx){
        //set the annotating bool to false
        annotating = false;
    }


}