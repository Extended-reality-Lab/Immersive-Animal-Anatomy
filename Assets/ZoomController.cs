using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ZoomController : MonoBehaviour
{
    public RenderTexture rt;
    public Material baseMaterial;
    public Material myMaterial;
    public GameObject magGlass;
    public Camera zoomCam;

    // Start is called before the first frame update
    void Start()
    {
        //instantiate a new material and texture renderer
        rt = new RenderTexture(256, 256, 16, RenderTextureFormat.ARGB32);
        rt.Create();
        zoomCam.targetTexture = rt;

        myMaterial = baseMaterial;
        myMaterial.SetTexture("_MainTex", rt);

        //assign it
        magGlass.GetComponent<MeshRenderer>().material = myMaterial;

    }


}
