using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyNode<T>
{

    #region Fields
    List<EnemyNode<T>> neighbors = new List<EnemyNode<T>>(4);
    T value;
    #endregion

    #region Properties
    public IList<EnemyNode<T>> Neighbors
    {
        get { return neighbors.AsReadOnly(); }
    }
    public int Count
    {
        get { return neighbors.Count; }
    }
    public T Value
    {
        get { return value; }
    }
    #endregion

    #region Constructors
    public EnemyNode(T value)
    {
        this.value = value;
        neighbors = new List<EnemyNode<T>>();
    }
    #endregion
    #region Methods
    public bool AddNeighbor(EnemyNode<T> enemy)
    {
        if(neighbors.Contains(enemy))
        {
            return false;
        }
        else
        {
            neighbors.Add(enemy);
        }
        return true;   
    }

    public bool RemoveNeighbor(EnemyNode<T> enemy)
    {
        if(!neighbors.Contains(enemy))
        {
            return false;
        }
        else
        {
            neighbors.Remove(enemy);
        }
        return true;
    }

    public bool RemoveAt(int index)
    {
        if (index < Count)
        {
            return false;
        }
        else
        {
            neighbors.RemoveAt(index);
        }
        return true;
    }

    public void RemoveAllNeighbors()
    {
        for (int i = neighbors.Count - 1; i >= 0; i--)
        {
            neighbors.RemoveAt(i);
        }
    }

    #endregion

}
