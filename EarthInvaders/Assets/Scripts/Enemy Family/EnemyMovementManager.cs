﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.SceneManagement;

public class EnemyMovementManager : MonoBehaviour {
    
    EnemyMove enemyMoveEvent = new EnemyMove();
    int numberOfMoves = 0;
    bool okToMove = true;
    List<int> moveRight;
    List<int> moveLeft;

	// Use this for initialization
    void Start () {
        BuildMovement();
        EventManager.AddEnemyMoveInvoker(this);
        EventManager.AddChangeLevelListener(BuildMovement);
        InvokeRepeating("Move", Constants.EnemyReadyClock, Constants.EnemyReadyClock);

	}
	
	// Update is called once per frame
	void Update () {
		
	}

    void OKToMove(bool enemyReady)
    {
        okToMove = enemyReady;
    }

    void Move()
    {
        if(moveRight.Contains(numberOfMoves))
        {
            enemyMoveEvent.Invoke(EnemyMovements.Right);   
        }
        else if(moveLeft.Contains(numberOfMoves))
        {
            enemyMoveEvent.Invoke(EnemyMovements.Left);
        }
        else
        {
            enemyMoveEvent.Invoke(EnemyMovements.Vertical); 
        }
        numberOfMoves++;
    }

    void BuildMovement()
    {
        moveRight = new List<int>();
        moveLeft = new List<int>();

        if(SceneManager.GetActiveScene().name.Equals("Level1"))
        {
            moveRight.Clear();
            moveLeft.Clear();

            moveRight.Add(0);
            moveRight.Add(1);
            moveRight.Add(6);
            moveRight.Add(7);

            moveLeft.Add(3);
            moveLeft.Add(4);
            moveLeft.Add(9);
            moveLeft.Add(10);  
        }
        else if(SceneManager.GetActiveScene().name.Equals("Level2"))
        {
            moveRight.Clear();
            moveLeft.Clear();

            moveRight.Add(0);
            moveRight.Add(2);

            moveLeft.Add(4);
            moveLeft.Add(6); 
        }
    }

    // event related methods
    public void AddEnemyMoveListener(UnityAction<EnemyMovements> listener)
    {
        enemyMoveEvent.AddListener(listener);
    }

}
