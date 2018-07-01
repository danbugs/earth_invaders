using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Text;

public class EnemyGraphBuilder : MonoBehaviour {

    static EnemyGraph<Enemy> enemyGraph;

    public static EnemyGraph<Enemy> EnemyGraph
    {
        get { return enemyGraph; }
    }

    private void Awake()
    {
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
	}

    void EnemyDead(Enemy enemy)
    {
        EnemyNode<Enemy> toBeRemoved = enemyGraph.Find(enemy);

        print(toBeRemoved.Value.ID + " has " + toBeRemoved.Count + " neighbors");

        foreach(EnemyNode<Enemy> node in enemyGraph.Nodes)
        {
            if (node.Neighbors.Contains(toBeRemoved)){
                node.RemoveNeighbor(toBeRemoved);
            }
        }

        toBeRemoved.RemoveAllNeighbors();
        enemyGraph.RemoveNode(toBeRemoved.Value);

    }

}
