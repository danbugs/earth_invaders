using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class ScreenUtils {

    static float screenRight;
    static float screenLeft;
    static float screenTop;
    static float screenBottom;
    static float zWorld;

    public static float ScreenRight
    {
        get { return screenRight; }
    }

    public static float ScreenLeft
    {
        get { return screenLeft; }
    }

    public static float ScreenTop
    {
        get { return screenTop; }
    }

    public static float ScreenBottom
    {
        get { return screenBottom; }
    }
    public static float ZWorld
    {
        get { return zWorld; }
    }

    public static void Initialize()
    {
        float zScreen = -Camera.main.transform.position.z;

        Vector3 lowerLeftCorner = new Vector3(0, 0, zScreen);
        Vector3 upperLeftCorner = new Vector3(0, Screen.height, zScreen);
        Vector3 lowerRightCorner = new Vector3(Screen.width, 0, zScreen);
        Vector3 upperRightCorner = new Vector3(Screen.width, Screen.height, zScreen);

        Vector3 lowerLeftCornerWorld = Camera.main.ScreenToWorldPoint(lowerLeftCorner);
        Vector3 upperLeftCornerWorld = Camera.main.ScreenToWorldPoint(upperLeftCorner);
        Vector3 lowerRightCornerWorld = Camera.main.ScreenToWorldPoint(lowerRightCorner);
        Vector3 upperRightCornerWorld = Camera.main.ScreenToWorldPoint(upperRightCorner);

        screenRight = lowerRightCornerWorld.x;
        screenLeft = lowerLeftCornerWorld.x;
        screenBottom = lowerRightCornerWorld.y;
        screenTop = upperLeftCornerWorld.y;

        zWorld = lowerLeftCornerWorld.z;
    }
}
