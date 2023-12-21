using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UIOperationsController : MonoBehaviour
{
    [SerializeField] public GameObject[] SkeletonArray;
    [SerializeField] public GameObject[] OrganArray;
    [SerializeField] public GameObject[] SkinArray;

    public void SkeletonSlider(float sliderVal)
    {
        for (int i = 0; i < SkeletonArray.Length; i++)
        {
            Renderer renderer = SkeletonArray[i].GetComponent<Renderer>();
            Material material = renderer.material;
            Color color = material.color;
            color.a = sliderVal; // Set the alpha value
            material.color = color;
        }
    }
    public void SkinSlider(float sliderVal)
    {
        for (int i = 0; i < SkinArray.Length; i++)
        {
            Renderer renderer = SkinArray[i].GetComponent<Renderer>();
            Material material = renderer.material;
            Color color = material.color;
            color.a = sliderVal; // Set the alpha value
            material.color = color;
        }
    }
     public void OrganSlider(float sliderVal)
    {
        for (int i = 0; i < OrganArray.Length; i++)
        {
            Renderer renderer = OrganArray[i].GetComponent<Renderer>();
            Material material = renderer.material;
            Color color = material.color;
            color.a = sliderVal; // Set the alpha value
            material.color = color;
        }
    }

    public void AllSlider(float sliderVal){
        SkeletonSlider(sliderVal);
        SkinSlider(sliderVal);
        OrganSlider(sliderVal);
    }
}
