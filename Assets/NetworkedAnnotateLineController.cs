using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.SceneManagement;

public class NetworkedAnnotateLineController : MonoBehaviour
{

    public InputActionReference drawButton;

    public bool annotating = false;
    public bool holderPresent = false;

    private LineRenderer line;
    private GameObject lineObject;
    private Vector3 previousPosition;
    private Vector3 currentPosition;

    [SerializeField]
    GameObject controllerPosition;
    GameObject AnnotationHolder;

    [SerializeField]
    private float minDistance = .1f;

    private void Start(){

        SceneManager.activeSceneChanged += ChangedActiveScene;

        drawButton.action.started += startedDraw;
        drawButton.action.canceled += endedDraw;

    }

    private void Update(){

        if(annotating == true){

            //grab the position of the controller
            currentPosition = controllerPosition.transform.position;

            if(Vector3.Distance(currentPosition, previousPosition) > minDistance){

                if(previousPosition == transform.position){

                    //send out a call to the annotation holder to create the first line
                    if(AnnotationHolder){
                        AnnotationHolder.GetComponent<NetworkLineHandler>().setFirstPointPositionServerRpc(currentPosition);
                    }
                }
                else{
                    
                    //send out a call to the annotation holder to create a point and propogate it across the network
                    if(AnnotationHolder){
                        AnnotationHolder.GetComponent<NetworkLineHandler>().setNormalPointPositionServerRpc(currentPosition);
                    }

                }

                previousPosition = currentPosition;

            }

        }

    }


    void startedDraw(InputAction.CallbackContext ctx){
        //initialize a new line prefab, and set the annotating bool to true
        if (holderPresent == true) {
            //send out a call to the annotation holder to instantiate a line renderer and propogate it
            if(AnnotationHolder){
                AnnotationHolder.GetComponent<NetworkLineHandler>().createNewLineServerRpc();
            }

            annotating = true;
        }
    }

    void endedDraw(InputAction.CallbackContext ctx){
        //set the annotating bool to false
        annotating = false;
    }

    private void ChangedActiveScene(Scene current, Scene next)
    {

        //check to see if there is an animal in this scene
        AnnotationHolder = GameObject.Find("/AnnotationHolder");

        if (AnnotationHolder != null)
        {
            holderPresent = true;
        }
        else
        {
            holderPresent = false;
        }

    }


}