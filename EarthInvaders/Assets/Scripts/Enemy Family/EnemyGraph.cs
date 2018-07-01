using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyGraph<T>
{
    #region Fields
    List<EnemyNode<T>> nodes = new List<EnemyNode<T>>();
    #endregion

    #region Properties
    public int Count
    {
        get { return nodes.Count; }
    }

    public IList<EnemyNode<T>> Nodes
    {
        get { return nodes.AsReadOnly(); }
    }
    #endregion

    #region Constructors
    public EnemyGraph(){}
    #endregion

    #region Methods
    public bool AddNode(T enemy)
    {
        
        if(Find(enemy) != null)
        {
            return false;
        }
        else
        {
            nodes.Add(new EnemyNode<T>(enemy));
        }

        return true;
    }

    public bool RemoveNode(T enemy)
    {
        if(Find(enemy) == null)
        {
            return false;
        }
        else
        {
            nodes.Remove(Find(enemy));
        }

        return true;
    }

    public bool AddEdge(T enemy1, T enemy2)
    {
        EnemyNode<T> firstEnemy = Find(enemy1);
        EnemyNode<T> secondEnemy = Find(enemy2);

        if (firstEnemy.Neighbors.Contains(secondEnemy) ||
           secondEnemy.Neighbors.Contains(firstEnemy))
        {
            return false;
        }
        else if (firstEnemy == null ||
                secondEnemy == null)
        {
            return false;
        }
        else
        {
            firstEnemy.AddNeighbor(secondEnemy);
            secondEnemy.AddNeighbor(firstEnemy);
        }

        return true;
    }

    public bool RemoveEdge(T enemy1, T enemy2)
    {
        EnemyNode<T> firstEnemy = Find(enemy1);
        EnemyNode<T> secondEnemy = Find(enemy2);

        if (!firstEnemy.Neighbors.Contains(secondEnemy) ||
           !secondEnemy.Neighbors.Contains(firstEnemy))
        {
            return false;
        }
        else if (firstEnemy == null ||
                secondEnemy == null)
        {
            return false;
        }
        else
        {
            firstEnemy.RemoveNeighbor(secondEnemy);
            secondEnemy.RemoveNeighbor(firstEnemy);
        }

        return true;
    }

    public void Clear()
    {
        for (int i = nodes.Count - 1; i >= 0; i--)
        {
            nodes.RemoveAt(i);
        }
    }

    public EnemyNode<T> Find(T enemy)
    {
        foreach(EnemyNode<T> node in nodes)
        {
            if(node.Value.Equals(enemy))
            {
                return node;
            }
        }

        return null;
    }

    #endregion
}
