using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class EnemyGraphBuilder : MonoBehaviour {

    const int xDistance = 2;
    const int yDistance = 2;

    int n = 0;

    [SerializeField]
    GameObject soldierPrefab;

    [SerializeField]
    GameObject protectorPrefab;

    [SerializeField]
    GameObject commanderPrefab;

    static EnemyGraph<Enemy> enemyGraph;
    EnemyShoot enemyShootEvent = new EnemyShoot();
    List<EnemyNode<Enemy>> enemiesCurrentlyShooting = new List<EnemyNode<Enemy>>();

    public static EnemyGraph<Enemy> EnemyGraph
    {
        get { return enemyGraph; }
    }

    private void Awake()
    {

        // Commander Spawning //
        for (int i = -8; i < 7; i++)
        {
            GameObject enemy = Instantiate(commanderPrefab, new Vector3(i, 3, ScreenUtils.ZWorld), Quaternion.identity) as GameObject;
            enemy.GetComponent<Enemy>().ID = n;
            enemy.GetComponent<Enemy>().Type = "Commander";
            n++;
        }

        // Commander Spawning //

        // Soldier Spawning //
        for (int i = -8; i < 7; i++)
        {
            GameObject enemy = Instantiate(soldierPrefab, new Vector3(i, 2, ScreenUtils.ZWorld), Quaternion.identity) as GameObject;
            enemy.GetComponent<Enemy>().ID = n;
            enemy.GetComponent<Enemy>().Type = "Soldier";
            n++;
        }
        // Soldier Spawning //

        // Protector Spawning //
        for (int i = -8; i < 7; i++)
        {
            GameObject enemy = Instantiate(protectorPrefab, new Vector3(i, 1, ScreenUtils.ZWorld), Quaternion.identity) as GameObject;
            enemy.GetComponent<Enemy>().ID = n;
            enemy.GetComponent<Enemy>().Type = "Protector";
            n++;
        }

        // Protector Spawning //

        enemyGraph = new EnemyGraph<Enemy>();
        GameObject[] enemies = GameObject.FindGameObjectsWithTag("Enemy");

        foreach (GameObject enemy in enemies)
        {
            enemyGraph.AddNode(enemy.GetComponent<Enemy>());
        }

        foreach (EnemyNode<Enemy> firstEnemyNode in enemyGraph.Nodes)
        {
            foreach (EnemyNode<Enemy> secondEnemyNode in enemyGraph.Nodes)
            {
                if (firstEnemyNode != secondEnemyNode)
                {
                    Vector2 positionDelta = firstEnemyNode.Value.Position - secondEnemyNode.Value.Position;

                    if (firstEnemyNode.Value.Position.y > secondEnemyNode.Value.Position.y &&
                        Mathf.Abs(positionDelta.x) == 0)
                    {
                        firstEnemyNode.AddNeighbor(secondEnemyNode);
                    }
                }
            }
        }

        EventManager.AddEnemyDeadListener(EnemyDead);

    }
    // Use this for initialization
    void Start () {

        EventManager.AddEnemyShootInvoker(this);
	}

    private void Update()
    {
    }

    void EnemyDead(Enemy enemy)
    {
        EnemyNode<Enemy> toBeRemoved = enemyGraph.Find(enemy);

        //print(toBeRemoved.Value.ID + " has " + toBeRemoved.Count + " neighbors");

        foreach(EnemyNode<Enemy> node in enemyGraph.Nodes)
        {
            if (node.Neighbors.Contains(toBeRemoved)){
                node.RemoveNeighbor(toBeRemoved);
                if(node.Neighbors.Count == 0 && ( node.Value.Type == "Soldier" || node.Value.Type == "Commander") && node != toBeRemoved && !enemiesCurrentlyShooting.Contains(node))
                {
                    enemiesCurrentlyShooting.Add(node);
                    enemyShootEvent.Invoke(node.Value.id);
                    //print(node.Value.ID + " can shoot");
                }
            }
        }

        toBeRemoved.RemoveAllNeighbors();
        enemyGraph.RemoveNode(toBeRemoved.Value);

    }

    // event related methods
    public void AddEnemyShootListener(UnityAction<int> listener)
    {
        enemyShootEvent.AddListener(listener);
    }

}
