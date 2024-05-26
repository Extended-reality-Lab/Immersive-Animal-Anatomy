using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ZoomShaderScreenPos : MonoBehaviour
{
    [SerializeField] private Material material;
    [SerializeField] private Camera viewCam;

    // Update is called once per frame
    private void Update()
    {
        Vector2 screenPixels = viewCam.WorldToScreenPoint(transform.position);
        screenPixels = new Vector2(screenPixels.x / Screen.width, screenPixels.y / Screen.height);

        material.SetVector("_ObjectScreenPosition", screenPixels);
    }
}
