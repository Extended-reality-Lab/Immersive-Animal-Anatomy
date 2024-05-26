using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class raycastchecker : MonoBehaviour
{
    [SerializeField]
    GameObject controller;
    GameObject lastObjectInQuestion;
    RaycastHit hitInfo;
    Vector3 fwd;
    int ModelLayer = 3;
    int layermask;
    public InputActionReference rightTriggerButton;

    [SerializeField]
    GameObject HelperLine;

    // Start is called before the first frame update
    void Start()
    {
        layermask = (1 << ModelLayer);
        rightTriggerButton.action.started += RightControllerTriggered;
    }

    // Update is called once per frame
    void Update()
    {
        fwd = controller.transform.forward;

        //determine the current target based on what the raycast hits (should be whatever the outermost collider is)
        GameObject ObjectInQuestion = null;

        //we hit a model object
        if(Physics.Raycast(controller.transform.position, fwd, out hitInfo, 20, layermask)){

            //turn on the line
            HelperLine.SetActive(true);
            HelperLine.GetComponent<LineRenderer>().SetPosition(1, new Vector3(0f, 0f, hitInfo.distance));

            Debug.Log(hitInfo.collider.gameObject.name);
            Debug.DrawRay(controller.transform.position, (fwd*10), Color.green);

            //set the new object
            ObjectInQuestion = hitInfo.collider.gameObject;

            //there is an old object
            if(lastObjectInQuestion != null){
                //same gameobject as last time is hovering
                if(ObjectInQuestion.GetInstanceID() == lastObjectInQuestion.GetInstanceID()){
                    //same gameobject, don't mess with tint, just update the line length
                    Debug.Log("Same Object");

                }
                //new gameobject was hovered
                else{
                    Debug.Log("New Object");

                    //call the toggle tint function on the new object
                    ObjectInQuestion.GetComponent<SelectionHandler>().tintOn();

                    //call the toggle tint function on the previous object
                    lastObjectInQuestion.GetComponent<SelectionHandler>().tintOff();

                }
            }
            //there is no old object
            else{
                //call the toggle tint function on the new object
                ObjectInQuestion.GetComponent<SelectionHandler>().tintOn();

                Debug.Log("New Object");
            }

            //update the current hover value
            lastObjectInQuestion = ObjectInQuestion;

        }
        //we did not hit a model object
        else{
            //turn off the line
            HelperLine.SetActive(false);

            //untint whatever the last object was
            if(lastObjectInQuestion != null){
                //call untint function
                lastObjectInQuestion.GetComponent<SelectionHandler>().tintOff();

                //make sure the selection function knows nothing came of the update
                lastObjectInQuestion = null;
            }

        }

    }

    void RightControllerTriggered(InputAction.CallbackContext ctx){
        //see if anything is currently hovered
        if(lastObjectInQuestion != null){
            lastObjectInQuestion.GetComponent<SelectionHandler>().playerToggledBoolServerRpc();
        }

    }


}
