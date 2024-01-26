using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class DynamicSliders : MonoBehaviour
{

    public GameObject sliderPrefab;
    public GameObject sliderContainer;
    public List <GameObject> ModelArray;
    private bool isModel = true;
    private string currentScene;

    public void SliderValueChanged(Slider slider, GameObject model){
        //Debug.Log("Slider Value: " + slider.value);
        Renderer renderer = model.GetComponent<Renderer>();
        Material material = renderer.material;
        Color color = material.color;
        color.a = slider.value;
        if(isModel){
            if (slider.value == 1){
                    model.SetActive(true);
                    material.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
                    material.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.Zero);
                    material.SetInt("_ZWrite", 1);
                    material.DisableKeyword("_ALPHATEST_ON");
                    material.DisableKeyword("_ALPHABLEND_ON");
                    material.DisableKeyword("_ALPHAPREMULTIPLY_ON");
                    material.renderQueue = -1;    
            }
            else if (slider.value < 1){
                        model.SetActive(true);
                        material.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.SrcAlpha);
                        material.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
                        material.SetInt("_ZWrite", 0);
                        material.DisableKeyword("_ALPHATEST_ON");
                        material.EnableKeyword("_ALPHABLEND_ON");
                        material.DisableKeyword("_ALPHAPREMULTIPLY_ON");
                        material.renderQueue = 2999;
            }
            else{
                model.SetActive(false);
            }
            material.color = color;
        }
        else{
            Debug.Log("No Model Found");
        }
    }
    public void CreateSliders(){
        if(isModel){
            foreach (GameObject model in ModelArray)
            {
                GameObject slider = Instantiate(sliderPrefab, sliderContainer.transform);
                slider.GetComponent<Slider>().maxValue = 1;
                slider.GetComponent<Slider>().minValue = 0;
                slider.GetComponent<Slider>().value = 1;
                slider.GetComponent<Slider>().onValueChanged.AddListener(delegate {SliderValueChanged(slider.GetComponent<Slider>(), model);});
                slider.GetComponentInChildren<Text>().text = model.name;
            }
        }
    }

    public void ClearArrays(){
        ModelArray.Clear();
    }

    public void FillArrays(){
        if(GameObject.FindWithTag("Model")!=null){
            isModel = true;
            // Find all children of the Skeleton object
            Transform[] allSkeleChildren = GameObject.Find("Model Skeleton").GetComponentsInChildren<Transform>();
            foreach (Transform child in allSkeleChildren)
            { 
                if(child.gameObject.name != "Model Skeleton"){
                    ModelArray.Add(child.gameObject);
                }
               
            }
            // Find all children of the Organ object
            Transform[] allOrgChildren = GameObject.Find("Model Internal Organs").GetComponentsInChildren<Transform>();
            foreach (Transform child in allOrgChildren)
            { 
                if(child.gameObject.name != "Model Internal Organs"){
                    ModelArray.Add(child.gameObject);
                }
                
            }
            
            // Find all children of the Skin object
            Transform[] allSkinChildren = GameObject.Find("Model External Organs").GetComponentsInChildren<Transform>();
            foreach (Transform child in allSkinChildren)
            { 
                if(child.gameObject.name != "Model External Organs"){
                    ModelArray.Add(child.gameObject);
                }
                
            }
            }
            else{
                isModel = false;
                ClearArrays();
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
            CreateSliders();
            currentScene = SceneManager.GetActiveScene().name;
            //Debug.Log("Current Scene: " + currentScene);
        }
    }
}
