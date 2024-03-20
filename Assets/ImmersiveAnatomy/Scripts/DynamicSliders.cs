using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using TMPro;

public class DynamicSliders : MonoBehaviour
{
    public GameObject sliderPrefab;
    public GameObject sliderContainer;
    public List <GameObject> ModelArray;
    private bool isModel = true;
    private string currentScene;
    

    public void SliderExternallyChanged(float sliderVal, string modelName){
        //locate the slider matching that name
        //Slider givenSlider = transform.FindChild(modelName + " Slider").GetComponent<Slider>();
        Slider givenSlider = transform.Find(modelName + " Slider").GetComponent<Slider>();

        //change the value of the slider to the provided one
        givenSlider.value = sliderVal;
    }

    public void SliderValueChanged(float sliderVal, GameObject model){
        //Debug.Log("Slider Value: " + slider.value);
        Renderer renderer = model.GetComponent<Renderer>();
        if(renderer == null){
            renderer = model.GetComponentInChildren<Renderer>();
        }
        Material material = renderer.material;
        Color color = material.color;
        color.a = sliderVal;
        if(isModel){
            if (sliderVal == 1){
                    model.SetActive(true);
                    material.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
                    material.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.Zero);
                    material.SetInt("_ZWrite", 1);
                    material.DisableKeyword("_ALPHATEST_ON");
                    material.DisableKeyword("_ALPHABLEND_ON");
                    material.DisableKeyword("_ALPHAPREMULTIPLY_ON");
                    material.renderQueue = -1;
                    model.GetComponent<BoxCollider>().enabled = true;
            }
            else if (sliderVal < 1){
                        model.SetActive(true);
                        material.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.SrcAlpha);
                        material.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
                        material.SetInt("_ZWrite", 0);
                        material.DisableKeyword("_ALPHATEST_ON");
                        material.EnableKeyword("_ALPHABLEND_ON");
                        material.DisableKeyword("_ALPHAPREMULTIPLY_ON");
                        material.renderQueue = 2999;
                        model.GetComponent<BoxCollider>().enabled = false;
            }
            else if (sliderVal == 0){
                model.SetActive(false);
                model.GetComponent<BoxCollider>().enabled = false;
            }
            material.color = color;
        }
        else{
            Debug.Log("No Model Found");
        }
    }
    public void CreateSliders(){
        if(isModel){
            int i=0;
            foreach (GameObject model in ModelArray)
            {   
                
                Debug.Log(model.name);
                GameObject slider = Instantiate(sliderPrefab, sliderContainer.transform);
                slider.name = model.name + " Slider";
                slider.GetComponentInChildren<TMP_Text>().text = model.name;
                Slider partSlider = slider.GetComponent<Slider>();
                //slider.position.y=slider.position.y+(i*slider.GetComponent<RectTransform>().rect.height);
                if(partSlider != null){
                    partSlider.onValueChanged.AddListener(delegate {SliderValueChanged(partSlider.value, model);});
                    partSlider.value = 1;
                }
                else{
                    Debug.Log("Slider not found on instantiated object");
                    if(sliderPrefab.GetComponent<Slider>()==null){
                        Debug.Log("Slider not found on prefab");
                    }
                    else{
                        Debug.Log("Slider found on prefab");
                    }
                
                }
                i++;
        }
    }
    }

    public void ClearArrays(){
        ModelArray.Clear();
    }

    public void FillArrays(){
        Debug.Log("Fill Arrays");
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
                if(child.gameObject.name != "Model External Organs"&&child.gameObject.tag != "Label"){
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
            Debug.Log(ModelArray.Count);
            CreateSliders();
            currentScene = SceneManager.GetActiveScene().name;
            //Debug.Log("Current Scene: " + currentScene);
        }
    }
}
