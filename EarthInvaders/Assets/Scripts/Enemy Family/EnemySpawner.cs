using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class EnemySpawner : MonoBehaviour {
    
    const int xDistance = 2;
    const int yDistance = 2;

    int n = 0;

    [SerializeField]
    GameObject soldierPrefab;

	// Use this for initialization
	void Awake () {
        for (int i = -8; i < 7; i++)
        {
            for (int j = 3; j > 0; j--)
            {
                GameObject enemy = Instantiate(soldierPrefab, new Vector3(i, j, ScreenUtils.ZWorld), Quaternion.identity) as GameObject;
                enemy.GetComponent<Enemy>().ID = n;
                n++;
            }    
        }
	}

    private void Start()
    {
    }

    // Update is called once per frame
    void Update () {
		
	}
}
