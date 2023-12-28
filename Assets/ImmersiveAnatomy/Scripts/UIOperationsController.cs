using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class UIOperationsController : MonoBehaviour
{
    
    public GameObject[] SkeletonArray;
    public GameObject[] OrganArray;
    public GameObject[] SkinArray;

    private bool isModel = true;

    private string currentScene;
    
    public void FillArrays(){
        if(GameObject.FindWithTag("Model")!=null){
            SkeletonArray.Initialize();
            OrganArray.Initialize();
            SkinArray.Initialize();
            // Find all children of the Skeleton object
            SkeletonArray = GameObject.Find("Skeleton").GetComponentsInChildren<GameObject>();
            // Find all children of the Organ object
            OrganArray = GameObject.Find("Organ").GetComponentsInChildren<GameObject>();
            // Find all children of the Skin object
            SkinArray = GameObject.Find("Skin").GetComponentsInChildren<GameObject>();
            Debug.Log("Target Size: 121 Actual Size: " + SkeletonArray.Length);
            Debug.Log("Target Size: 10 Actual Size: " + OrganArray.Length);
            Debug.Log("Target Size: 1 Actual Size: " + SkinArray.Length);
            }
            else{
                isModel = false;
            }
    }
    public void SkeletonSlider(float sliderVal)
    {
        if(isModel){
            for (int i = 0; i < SkeletonArray.Length; i++)
            {
                Renderer renderer = SkeletonArray[i].GetComponent<Renderer>();
                Material material = renderer.material;
                Color color = material.color;
                color.a = sliderVal; // Set the alpha value
                material.color = color;
                if(SkeletonArray[i].name == "Skull"){
                    color.b=sliderVal;
                    material.color = color;
                }
            }
        }
        else{
            Debug.Log("No Model Found");
        }
    }
    public void SkinSlider(float sliderVal)
    {
        if(isModel){
            for (int i = 0; i < SkinArray.Length; i++)
            {
                Renderer renderer = SkinArray[i].GetComponent<Renderer>();
                Material material = renderer.material;
                Color color = material.color;
                color.a = sliderVal; // Set the alpha value
                material.color = color;
            }
        }
        else{
            Debug.Log("No Model Found");
        }
        
    }
     public void OrganSlider(float sliderVal)
    {
        if(isModel){
            for (int i = 0; i < OrganArray.Length; i++)
            {
                Renderer renderer = OrganArray[i].GetComponent<Renderer>();
                Material material = renderer.material;
                Color color = material.color;
                color.a = sliderVal; // Set the alpha value
                material.color = color;
            }
        }
        else{
            Debug.Log("No Model Found");
        }
    }

    public void AllSlider(float sliderVal){
        if(isModel){
        SkeletonSlider(sliderVal);
        SkinSlider(sliderVal);
        OrganSlider(sliderVal);
        }
        else{
            Debug.Log("No Model Found");
        }
    }
    public void modelButton(){
    }
    public void roomButton(){

    }
    public void gameButton(){

    }

    public void Start(){
            currentScene = SceneManager.GetActiveScene().name;
            
        }   
    public void Update(){
        if(SceneManager.GetActiveScene().name != currentScene/*&&SceneManager.GetActiveScene().name != "Lobby"*/){
            FillArrays();
            currentScene = SceneManager.GetActiveScene().name;
        }
    }
    
}
