using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class QuizController : MonoBehaviour
{
    [SerializeField]
    TextMeshPro textComponent;

    bool partWasSelected = false;
    bool partIsSelected = false;

    [SerializeField]
    GameObject Animal;

    [SerializeField]
    GameObject partChoice;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (partChoice) {
            if (partChoice.GetComponent<Renderer>().material.color == Color.blue)
            {
                partIsSelected = true;
            }
            else
            {
                partIsSelected = false;
            }
        }

        //decide if the question just got answered
        if (partIsSelected == true && partWasSelected == false)
        {
            textComponent.text = "That's Correct!";
            partIsSelected = false;
            partWasSelected = false;
            partChoice = null;
            StartCoroutine(changeQuestion());
        }

        partWasSelected = partIsSelected;
        
    }

    IEnumerator changeQuestion()
    {

        yield return new WaitForSeconds(2);

        //grab a random part from the model
        int childCount = Animal.transform.childCount;
        int childChoiceNum = Random.Range(0, childCount);

        GameObject childChoice = Animal.transform.GetChild(childChoiceNum).gameObject;

        int partCount = childChoice.transform.childCount;
        int partChoiceNum = Random.Range(0, partCount);

        partChoice = childChoice.transform.GetChild(partChoiceNum).gameObject;

        //update the question text
        textComponent.text = "Please Locate The " + partChoice.name + " And Indicate It With Your Controller";
    }
}