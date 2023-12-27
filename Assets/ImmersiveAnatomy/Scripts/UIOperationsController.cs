using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class UIOperationsController : MonoBehaviour
{
    public GameObject arrayHolder;

    private ArrayHolder arrayHolderScript;
    public GameObject[] SkeletonArray;
    public GameObject[] OrganArray;
    public GameObject[] SkinArray;
    
    public void Start(){
        arrayHolderScript=arrayHolder.GetComponent<ArrayHolder>();
        SkeletonArray=arrayHolderScript.SkeletonArray;
        OrganArray=arrayHolderScript.OrganArray;
        SkinArray=arrayHolderScript.SkinArray;
    }
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
    public void modelButton(){

    }
    public void roomButton(){

    }
    public void gameButton(){

    }
}
