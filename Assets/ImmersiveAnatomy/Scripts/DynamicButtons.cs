using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using TMPro;

public class DynamicButtons : MonoBehaviour
{

    public List <GameObject> ModelArray;
    public List <Vector3> ModelPositions;
    public List <Quaternion> ModelRotations;
    public List <GameObject> SelectedModels;

    public List <Vector3> LocalModelPositions;
    public List <Quaternion> LocalModelRotations;
    private string currentScene;
    private Color selectedColor = new Color(0.75f, 0.75f,0.75f, 1.0f);

    public void plusButton(){

        Debug.Log("Pluh!");
        
        //find which models are currently selected in the scene
        foreach (GameObject model in ModelArray){

            Material material = model.GetComponent<Renderer>().material;

            //if it has the selected color, we know it's been selected
            if((material.color.r == selectedColor.r) && (material.color.g == selectedColor.g) && (material.color.b == selectedColor.b)){

                //alter the alpha
                Color color = material.color;

                Debug.Log("To be transparency: " + (color.a + .2f));

                //take a look at it's current alpha and make a decision on how to proceed
                if((color.a + .2f) > .9f){
                    model.GetComponent<Renderer>().enabled = true;
                    material.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
                    material.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.Zero);
                    material.SetInt("_ZWrite", 1);
                    material.DisableKeyword("_ALPHATEST_ON");
                    material.DisableKeyword("_ALPHABLEND_ON");
                    material.DisableKeyword("_ALPHAPREMULTIPLY_ON");
                    material.renderQueue = -1;
                    model.GetComponent<BoxCollider>().enabled = true;

                    color.a = 1;
                    material.color = color;
                }
                else if((color.a + .2f) < .9f){
                    model.GetComponent<Renderer>().enabled = true;
                    material.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.SrcAlpha);
                    material.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
                    material.SetInt("_ZWrite", 0);
                    material.DisableKeyword("_ALPHATEST_ON");
                    material.EnableKeyword("_ALPHABLEND_ON");
                    material.DisableKeyword("_ALPHAPREMULTIPLY_ON");
                    material.renderQueue = 2999;
                    model.GetComponent<BoxCollider>().enabled = true;

                    color.a += .2f;
                    material.color = color;
                }

            }

        }

    }

    public void minusButton(){

        Debug.Log("Pluh!");
        
        //find which models are currently selected in the scene
        foreach (GameObject model in ModelArray){

            Material material = model.GetComponent<Renderer>().material;

            //if it has the selected color, we know it's been selected
            if((material.color.r == selectedColor.r) && (material.color.g == selectedColor.g) && (material.color.b == selectedColor.b)){
                //alter the alpha
                Color color = material.color;

                Debug.Log("To be transparency: " + (color.a - .2f));

                //take a look at it's current alpha and make a decision on how to proceed
                if((color.a - .2f) < .1f){

                    color.a = 0;
                    material.color = color;

                    model.GetComponent<Renderer>().enabled = false;
                    model.GetComponent<BoxCollider>().enabled = false;
                }
                else if((color.a - .2f) > .1f){
                    model.GetComponent<Renderer>().enabled = true;
                    material.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.SrcAlpha);
                    material.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
                    material.SetInt("_ZWrite", 0);
                    material.DisableKeyword("_ALPHATEST_ON");
                    material.EnableKeyword("_ALPHABLEND_ON");
                    material.DisableKeyword("_ALPHAPREMULTIPLY_ON");
                    material.renderQueue = 2999;
                    model.GetComponent<BoxCollider>().enabled = true;

                    color.a -= .2f;
                    material.color = color;
                }

            }

        }

    }
    public void invisButton(){
        Debug.Log("invisible!");
        foreach (GameObject model in ModelArray){

            Material material = model.GetComponent<Renderer>().material;

            //if it has the selected color, we know it's been selected
            if((material.color.r == selectedColor.r) && (material.color.g == selectedColor.g) && (material.color.b == selectedColor.b)){
                //alter the alpha
                Color color = material.color;
                color.a = 0;
                material.color = color;
                model.GetComponent<Renderer>().enabled = false;
                model.GetComponent<BoxCollider>().enabled = false;
            }
        }
    }

    public void opaqueButton(){
        Debug.Log("isible!");
        foreach (GameObject model in ModelArray){

            Material material = model.GetComponent<Renderer>().material;

            //if it has the selected color, we know it's been selected
            if((material.color.r == selectedColor.r) && (material.color.g == selectedColor.g) && (material.color.b == selectedColor.b)){

                //alter the alpha
                Color color = material.color;
                model.GetComponent<Renderer>().enabled = true;
                material.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
                material.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.Zero);
                material.SetInt("_ZWrite", 1);
                material.DisableKeyword("_ALPHATEST_ON");
                material.DisableKeyword("_ALPHABLEND_ON");
                material.DisableKeyword("_ALPHAPREMULTIPLY_ON");
                material.renderQueue = -1;
                model.GetComponent<BoxCollider>().enabled = true;

                color.a = 1;
                material.color = color;
            }
        }
    }


    public void ClearArrays(){
        ModelArray.Clear();
    }

    public void FillArrays(){
        Debug.Log("Fill Arrays");
        if(GameObject.FindWithTag("Model")!=null){
            // Find all children of the body object
            Transform[] allBodyChildren = GameObject.Find("Model Body").GetComponentsInChildren<Transform>();
            foreach (Transform child in allBodyChildren)
            { 
                if(child.gameObject.name != "Model Body"&&child.gameObject.tag != "Label"){
                    ModelArray.Add(child.gameObject);
                    ModelPositions.Add(child.gameObject.transform.position);
                    ModelRotations.Add(child.gameObject.transform.rotation);
                    LocalModelPositions.Add(child.gameObject.transform.localPosition);
                    LocalModelRotations.Add(child.gameObject.transform.localRotation);
                }
               
            }
            
            // Find all children of the Skeleton object
            Transform[] allSkeleChildren = GameObject.Find("Model Skeleton").GetComponentsInChildren<Transform>();
            foreach (Transform child in allSkeleChildren)
            { 
                if(child.gameObject.name != "Model Skeleton"&&child.gameObject.tag != "Label"){
                    ModelArray.Add(child.gameObject);
                    ModelPositions.Add(child.gameObject.transform.position);
                    ModelRotations.Add(child.gameObject.transform.rotation);
                    LocalModelPositions.Add(child.gameObject.transform.localPosition);
                    LocalModelRotations.Add(child.gameObject.transform.localRotation);
                }
               
            }
            // Find all children of the Organ object
            Transform[] allOrgChildren = GameObject.Find("Model Organs").GetComponentsInChildren<Transform>();
            foreach (Transform child in allOrgChildren)
            { 
                if(child.gameObject.name != "Model Organs"&&child.gameObject.tag != "Label"){
                    ModelArray.Add(child.gameObject);
                
                    ModelPositions.Add(child.gameObject.transform.position);
                    
                    ModelRotations.Add(child.gameObject.transform.rotation);
                    LocalModelPositions.Add(child.gameObject.transform.localPosition);
                    LocalModelRotations.Add(child.gameObject.transform.localRotation);
                }
                
            }
            //Find all objects in Model Lymphatic_system
            Transform[] allLymphChildren = GameObject.Find("Model Lymphatic_system").GetComponentsInChildren<Transform>();
            foreach (Transform child in allLymphChildren)
            { 
                if(child.gameObject.name != "Model Lymphatic_system"&&child.gameObject.tag != "Label"){
                    ModelArray.Add(child.gameObject);
                
                    ModelPositions.Add(child.gameObject.transform.position);
                    
                    ModelRotations.Add(child.gameObject.transform.rotation);
                    LocalModelPositions.Add(child.gameObject.transform.localPosition);
                    LocalModelRotations.Add(child.gameObject.transform.localRotation);
                }
                
            }
            //Find all objects in model muscle system
            Transform[] allMuscleChildren = GameObject.Find("Model Muscles").GetComponentsInChildren<Transform>();
            foreach (Transform child in allMuscleChildren)
            { 
                if(child.gameObject.name != "Model Muscles"&&child.gameObject.tag != "Label"){
                    ModelArray.Add(child.gameObject);
                
                    ModelPositions.Add(child.gameObject.transform.position);
                    
                    ModelRotations.Add(child.gameObject.transform.rotation);
                    LocalModelPositions.Add(child.gameObject.transform.localPosition);
                    LocalModelRotations.Add(child.gameObject.transform.localRotation);
                }
                
            }
            //Find all objects in Model Nervous_system
            Transform[] allNervChildren = GameObject.Find("Model Nervous_system").GetComponentsInChildren<Transform>();
            foreach (Transform child in allNervChildren)
            { 
                if(child.gameObject.name != "Model Nervous_system"&&child.gameObject.tag != "Label"){
                    ModelArray.Add(child.gameObject);
                
                    ModelPositions.Add(child.gameObject.transform.position);
                    
                    ModelRotations.Add(child.gameObject.transform.rotation);
                    LocalModelPositions.Add(child.gameObject.transform.localPosition);
                    LocalModelRotations.Add(child.gameObject.transform.localRotation);
                }
                
            }
            //Find all objects in Model Vascular_system
            Transform[] allVascChildren = GameObject.Find("Model Vascular_system").GetComponentsInChildren<Transform>();
            foreach (Transform child in allVascChildren)
            { 
                if(child.gameObject.name != "Model Vascular_system"&&child.gameObject.tag != "Label"){
                    ModelArray.Add(child.gameObject);
                
                    ModelPositions.Add(child.gameObject.transform.position);
                    
                    ModelRotations.Add(child.gameObject.transform.rotation);
                    LocalModelPositions.Add(child.gameObject.transform.localPosition);
                    LocalModelRotations.Add(child.gameObject.transform.localRotation);
                }
                
            }
            
            }
            else{
                ClearArrays();
            }
    }
    public void ResetSelectedModels(){
        Debug.Log("Add Selected Models");
        if(ModelArray!=null){
            foreach (GameObject model in ModelArray){
                Material material = model.GetComponent<Renderer>().material;
                if((material.color.r == selectedColor.r) && (material.color.g == selectedColor.g) && (material.color.b == selectedColor.b)){
                    SelectedModels.Add(model);
                }
            }
        }
        foreach (GameObject model in SelectedModels){
            model.transform.localPosition = LocalModelPositions[ModelArray.IndexOf(model)];
            model.transform.localRotation = LocalModelRotations[ModelArray.IndexOf(model)];
        }
        SelectedModels.Clear();
    }
    public void ResetModelPositions(){
        Debug.Log("Reset Model Positions");
        if(ModelArray!=null){
            for(int i = 0; i < ModelArray.Count; i++){
                ModelArray[i].GetComponent<AnimalPartOwnershipController>().gimmiePartOwnershipPleaseServerRpc();
                ModelArray[i].transform.position = ModelPositions[i];
                ModelArray[i].transform.rotation = ModelRotations[i];
            }
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
            Debug.Log(ModelArray.Count);
            currentScene = SceneManager.GetActiveScene().name;
            //Debug.Log("Current Scene: " + currentScene);
        }
    }  
}
