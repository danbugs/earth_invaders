using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Events;

public class HUD : MonoBehaviour
{

    static int playerHealth = Constants.MaxPlayerHealth;
    [SerializeField]
    Text playerHealthDisplay;
    [SerializeField]
    Text pointsDisplay;
    string playerHealthPrefix = "Health: ";
    bool gameFinished = false;

    GameOver gameOverEvent = new GameOver();

    public static int PlayerHealth
    {
        get { return playerHealth; }
        set { playerHealth = value; }
    }

    // Use this for initialization
    void Start()
    {
        EventManager.AddHurtListeners(UpdateHealth);
        EventManager.AddGameOverInvokers(this);
        EventManager.AddResetPlayerHealthListeners(ResetHealth);
        playerHealthDisplay.text = playerHealthPrefix + playerHealth.ToString();
    }

    // Update is called once per frame
    void Update()
    {
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

    void ResetHealth()
    {
        playerHealth = Constants.MaxPlayerHealth;
        Debug.Log(playerHealth);
        playerHealthDisplay.text = playerHealthPrefix + playerHealth.ToString();

    }


    // event related methods

    public void AddGameOverListener(UnityAction<int> listener)
    {
        gameOverEvent.AddListener(listener);
    }
}
