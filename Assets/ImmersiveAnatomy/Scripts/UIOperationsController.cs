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
    public List <GameObject> ModelArray;
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
                if(child.gameObject.name != "Model Skeleton"){
                    SkeletonArray.Add(child.gameObject);
                    ModelArray.Add(child.gameObject);
                }
               
            }
            // Find all children of the Organ object
            Transform[] allOrgChildren = GameObject.Find("Model Internal Organs").GetComponentsInChildren<Transform>();
            foreach (Transform child in allOrgChildren)
            { 
                if(child.gameObject.name != "Model Internal Organs"){
                    OrganArray.Add(child.gameObject);
                    ModelArray.Add(child.gameObject);
                }
                
            }
            
            // Find all children of the Skin object
            Transform[] allSkinChildren = GameObject.Find("Model External Organs").GetComponentsInChildren<Transform>();
            foreach (Transform child in allSkinChildren)
            { 
                if(child.gameObject.name != "Model External Organs"){
                SkinArray.Add(child.gameObject);
                ModelArray.Add(child.gameObject);
                }
                
            }
            /*Debug.Log("Target Size: 121 Actual Size: "+ SkeletonArray.Count);
            /*if(SkeletonArray.Count != 121){
                for (int i = 0; i < SkeletonArray.Count; i++)
                {
                    Debug.log(SkeletonArray[i].name)
                }
            }
            Debug.Log("Target Size: 10 Actual Size: " + OrganArray.Count);
            Debug.Log("Target Size: 1 Actual Size: " + SkinArray.Count);*/
            }
            else{
                isModel = false;
                ClearArrays();
            }
        //Debug.Log("Arrays Filled" + isModel);
    }
    public void ClearArrays(){
        //Debug.Log("Clearing Arrays");
        SkeletonArray.Clear();
        OrganArray.Clear();
        SkinArray.Clear();
        ModelArray.Clear();
        //Debug.Log("Arrays Cleared");
    }
    public void SkeletonSlider(float sliderVal)
    {
        //Debug.Log("Slider Value: " + sliderVal);
        if(isModel){
            for (int i = 0; i < SkeletonArray.Count; i++)
            {
                Renderer renderer = SkeletonArray[i].GetComponent<Renderer>();
                Material material = renderer.material;
                Color color = material.color;
                color.a = sliderVal; // Set the alpha value
                if(color.a<1){
                    SkeletonArray[i].SetActive(true);
                    material.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.SrcAlpha);
                    material.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
                    material.SetInt("_ZWrite", 0);
                    material.DisableKeyword("_ALPHATEST_ON");
                    material.EnableKeyword("_ALPHABLEND_ON");
                    material.DisableKeyword("_ALPHAPREMULTIPLY_ON");
                    material.renderQueue = 2999;
                }
                else if (color.a==0){
                    SkeletonArray[i].SetActive(false);
                }
                else{
                    SkeletonArray[i].SetActive(true);
                    material.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
                    material.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.Zero);
                    material.SetInt("_ZWrite", 1);
                    material.DisableKeyword("_ALPHATEST_ON");
                    material.DisableKeyword("_ALPHABLEND_ON");
                    material.DisableKeyword("_ALPHAPREMULTIPLY_ON");
                    material.renderQueue = -1;
                }
                material.color = color;
            }
        }
        else{
            Debug.Log("No Model Found");
        }
    }
    public void SkinSlider(float sliderVal)
    {
        //Debug.Log("Slider Value: " + sliderVal);
        if(isModel){
            for (int i = 0; i < SkinArray.Count; i++)
            {
                Renderer renderer = SkinArray[i].GetComponent<Renderer>();
                Material material = renderer.material;
                Color color = material.color;
                color.a = sliderVal; // Set the alpha value
                if(color.a<1){
                    material.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.SrcAlpha);
                    material.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
                    material.SetInt("_ZWrite", 0);
                    material.DisableKeyword("_ALPHATEST_ON");
                    material.EnableKeyword("_ALPHABLEND_ON");
                    material.DisableKeyword("_ALPHAPREMULTIPLY_ON");
                    material.renderQueue = 3000;
                }
                else{
                    material.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
                    material.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.Zero);
                    material.SetInt("_ZWrite", 1);
                    material.DisableKeyword("_ALPHATEST_ON");
                    material.DisableKeyword("_ALPHABLEND_ON");
                    material.DisableKeyword("_ALPHAPREMULTIPLY_ON");
                    material.renderQueue = -1;
                }
                material.color = color;
            }
        }
        else{
            Debug.Log("No Model Found");
        }
        
    }
     public void OrganSlider(float sliderVal)
    {
       // Debug.Log("Slider Value: " + sliderVal);
        if(isModel){
            for (int i = 0; i < OrganArray.Count; i++)
            {
                Renderer renderer = OrganArray[i].GetComponent<Renderer>();
                Material material = renderer.material;
                Color color = material.color;
                color.a = sliderVal; // Set the alpha value
                if(color.a<1){
                    material.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.SrcAlpha);
                    material.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
                    material.SetInt("_ZWrite", 0);
                    material.DisableKeyword("_ALPHATEST_ON");
                    material.EnableKeyword("_ALPHABLEND_ON");
                    material.DisableKeyword("_ALPHAPREMULTIPLY_ON");
                    material.renderQueue = 2998;
                }
                else{
                    material.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
                    material.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.Zero);
                    material.SetInt("_ZWrite", 1);
                    material.DisableKeyword("_ALPHATEST_ON");
                    material.DisableKeyword("_ALPHABLEND_ON");
                    material.DisableKeyword("_ALPHAPREMULTIPLY_ON");
                    material.renderQueue = -1;
                }
                material.color = color;
            }
        }
        else{
            Debug.Log("No Model Found");
        }
    }

    public void ModelSlider(float sliderVal){
        if(isModel){
            for (int i = 0; i < ModelArray.Count; i++)
            {
                Renderer renderer = ModelArray[i].GetComponent<Renderer>();
                Material material = renderer.material;
                Color color = material.color;
                color.a = sliderVal; // Set the alpha value
                if(color.a<1){
                    material.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.SrcAlpha);
                    material.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
                    material.SetInt("_ZWrite", 0);
                    material.DisableKeyword("_ALPHATEST_ON");
                    material.EnableKeyword("_ALPHABLEND_ON");
                    material.DisableKeyword("_ALPHAPREMULTIPLY_ON");
                    material.renderQueue = 2999;
                }
                else{
                    material.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
                    material.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.Zero);
                    material.SetInt("_ZWrite", 1);
                    material.DisableKeyword("_ALPHATEST_ON");
                    material.DisableKeyword("_ALPHABLEND_ON");
                    material.DisableKeyword("_ALPHAPREMULTIPLY_ON");
                    material.renderQueue = -1;
                }
                material.color = color;
            }
        }
        else{
            Debug.Log("No Model Found");
        }
    }

    public void Start(){
            currentScene = SceneManager.GetActiveScene().name;
            //Debug.Log("Current Scene: " + currentScene);
        }   
    public void Update(){
        if(SceneManager.GetActiveScene().name != currentScene){
            /*&&SceneManager.GetActiveScene().name != "Lobby"*/
            ClearArrays();
            FillArrays();
            currentScene = SceneManager.GetActiveScene().name;
            //Debug.Log("Current Scene: " + currentScene);
        }
    }
    
}
