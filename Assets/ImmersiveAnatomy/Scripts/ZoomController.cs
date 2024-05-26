using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class ZoomController : MonoBehaviour
{
    public RenderTexture rt;
    public Material baseMaterial;
    public Material myMaterial;
    public GameObject magGlass;
    public Camera zoomCam;
    public InputActionReference zoomToggle;
    public bool zoomed;

    // Start is called before the first frame update
    void Start()
    {

        //create the input reference
        zoomToggle.action.started += zoomToggled;

        //instantiate a new material and texture renderer
        rt = new RenderTexture(256, 256, 16, RenderTextureFormat.ARGB32);
        rt.Create();
        zoomCam.targetTexture = rt;

        myMaterial = baseMaterial;
        myMaterial.SetTexture("_MainTex", rt);

        //assign it
        magGlass.GetComponent<MeshRenderer>().material = myMaterial;

        zoomed = false;
        magGlass.SetActive(false);

    }

    void zoomToggled(InputAction.CallbackContext ctx)
    {
        Debug.Log("Pluh!");
        if (zoomed == false)
        {
            //enable it
            magGlass.SetActive(true);
        }
        else
        {
            //disable it
            magGlass.SetActive(false);
        }

        zoomed = !zoomed;
    }


}
