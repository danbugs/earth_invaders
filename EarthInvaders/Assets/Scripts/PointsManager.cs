using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class PointsManager
{
    static int points = 0;
    public static int Points
    {
        get { return points; }
        set { points = value; }
    }

}
