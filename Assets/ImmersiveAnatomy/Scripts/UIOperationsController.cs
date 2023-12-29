using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class UIOperationsController : MonoBehaviour
{
    
    public List <GameObject> SkeletonArray;
    public List <GameObject> OrganArray;
    public List <GameObject> SkinArray;

    private bool isModel = true;

    private string currentScene;
    
    public void FillArrays(){
        Debug.Log("Filling Arrays");
        if(GameObject.FindWithTag("Model")!=null){
            isModel = true;
            // Find all children of the Skeleton object
            Transform[] allSkeleChildren = GameObject.Find("Model Skeleton").GetComponentsInChildren<Transform>();
            foreach (Transform child in allSkeleChildren)
            { 
                if(child.gameObject.name != "Skeleton"){
                    SkeletonArray.Add(child.gameObject);
                }
               
            }
            // Find all children of the Organ object
            Transform[] allOrgChildren = GameObject.Find("Model Internal Organs").GetComponentsInChildren<Transform>();
            foreach (Transform child in allOrgChildren)
            { 
                if(child.gameObject.name != "Model Internal Organs"){
                    OrganArray.Add(child.gameObject);
                }
                
            }
            
            // Find all children of the Skin object
            Transform[] allSkinChildren = GameObject.Find("Model External Organs").GetComponentsInChildren<Transform>();
            foreach (Transform child in allSkinChildren)
            { 
                if(child.gameObject.name != "Model External Organs"){
                SkinArray.Add(child.gameObject);
                }
                
            }
            Debug.Log("Target Size: 121 Actual Size: "+ SkeletonArray.Count);
            Debug.Log("Target Size: 10 Actual Size: " + OrganArray.Count);
            Debug.Log("Target Size: 1 Actual Size: " + SkinArray.Count);
            }
            else{
                isModel = false;
                ClearArrays();
            }
        Debug.Log("Arrays Filled" + isModel);
    }
    public void ClearArrays(){
        Debug.Log("Clearing Arrays");
        SkeletonArray.Clear();
        OrganArray.Clear();
        SkinArray.Clear();
        Debug.Log("Arrays Cleared");
    }
    public void SkeletonSlider(float sliderVal)
    {
        if(isModel){
            for (int i = 0; i < SkeletonArray.Count; i++)
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
            for (int i = 0; i < SkinArray.Count; i++)
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
            for (int i = 0; i < OrganArray.Count; i++)
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
            Debug.Log("Current Scene: " + currentScene);
        }   
    public void Update(){
        if(SceneManager.GetActiveScene().name != currentScene){
            /*&&SceneManager.GetActiveScene().name != "Lobby"*/
            ClearArrays();
            FillArrays();
            currentScene = SceneManager.GetActiveScene().name;
            Debug.Log("Current Scene: " + currentScene);
        }
    }
    
}
