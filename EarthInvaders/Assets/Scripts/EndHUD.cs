using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class EndHUD : MonoBehaviour {

    [SerializeField]
    Text pointsDisplay;
    string pointsPrefix = "Points: ";

	// Use this for initialization
	void Start () {
        pointsDisplay.text = pointsPrefix + PointsManager.Points.ToString();
	}

}
