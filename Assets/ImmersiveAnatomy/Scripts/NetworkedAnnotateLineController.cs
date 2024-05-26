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
    public List<Vector3> lineList;
    [SerializeField]
    GameObject linePrefab;
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
                    line.SetPosition(0, currentPosition);

                }
                else{
                    line.positionCount++;
                    line.SetPosition(line.positionCount - 1, currentPosition);              

                }

                previousPosition = currentPosition;

                //add to the array for this line
                lineList.Add(currentPosition);

            }

        }

    }

    public void destroyAllLines(){

        if(AnnotationHolder){
                AnnotationHolder.GetComponent<NetworkLineHandler>().killAllLinesServerRpc();
        }

    }


    void startedDraw(InputAction.CallbackContext ctx){
        if (holderPresent == true) {

            lineList.Clear();

            lineObject = Instantiate(linePrefab, new Vector3(0f, 0f, 0f), Quaternion.identity);
            lineObject.transform.parent = AnnotationHolder.transform;
            line = lineObject.GetComponent<LineRenderer>();
            annotating = true;

        }
    }

    void endedDraw(InputAction.CallbackContext ctx){
        //set the annotating bool to false
        annotating = false;

        //turn the list into a fixed length array to send over the network since netcode can't handle dynamic list types
        Vector3[] lineArray = new Vector3[lineList.Count];
        for(int i = 0; i < lineList.Count; i++){
            lineArray[i] = lineList[i];
        }

        //send a message to the server to populate the line for all other clients
        if(AnnotationHolder){
            AnnotationHolder.GetComponent<NetworkLineHandler>().buildLineServerRpc(lineArray);
        }

        //delete the temporary local line
        Destroy(lineObject);

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