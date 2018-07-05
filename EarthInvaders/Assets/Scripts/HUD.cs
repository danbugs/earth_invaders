using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Events;

public class HUD : MonoBehaviour {

    static int playerHealth = 1000;
    [SerializeField]
    Text playerHealthDisplay;
    string playerHealthPrefix = "Health: ";
    bool gameFinished = false;

    GameOver gameOverEvent = new GameOver();

    public static int PlayerHealth
    {
        get { return playerHealth; }
    }

	// Use this for initialization
	void Start () {
        EventManager.AddHurtListeners(UpdateHealth);
        playerHealthDisplay.text = playerHealthPrefix + playerHealth.ToString();
	}
	
	// Update is called once per frame
	void Update () {
	}

    void UpdateHealth(int damageTaken)
    {
        playerHealth -= damageTaken;
        playerHealthDisplay.text = playerHealthPrefix + playerHealth.ToString();
        if (playerHealth <= 0 && !gameFinished)
        {
            gameOverEvent.Invoke(0);
            gameFinished = true;
        }
    }

    // event related methods

    public void AddGameOverListener(UnityAction<int> listener)
    {
        gameOverEvent.AddListener(listener);
    }
}
