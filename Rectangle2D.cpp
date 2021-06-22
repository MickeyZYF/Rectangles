//
// Created by Mickey Zhou on 2021-06-14.
//
#include <iostream>
#include <string>
#include <vector>
#include "Point2D.h"
#include "Rectangle2D.h"

// Default constructor, basically just a point at (0,0)
Rectangle2D::Rectangle2D()
{
    width = 0;
    height = 0;
    bottomLeft = Point2D(0,0);
    bottomLeft = Point2D(0,0);
    bottomLeft = Point2D(0,0);
    bottomLeft = Point2D(0,0);
}

// Our basic constructor, if all we need is to check for intersection, this should be enough for now
// NOTE: Implement something to catch if the width and height are negative,
//       code probably still works fine but could be messy
Rectangle2D::Rectangle2D(float width, float height, float x, float y)
{
    this->width = width;
    this->height = height;
    bottomLeft = Point2D(x, y);
    bottomRight = Point2D(x + width, y);
    topLeft = Point2D(x, y + height);
    topRight = Point2D(x + width, y + height);
}

// Takes two Rectangle2D and returns true if they intersect, returns false otherwise
// We basically check two cases:
// 1. If one rectangle is above the top edge of the another, then they do not intersect
// 2. If one rectangle is on the left side of the leftmost edge of another, then they do not intersect
// We check both cases, if neither is true, then they intersect
bool checkIntersect(Rectangle2D rectangleA, Rectangle2D rectangleB)
{
    Point2D topLeftA = rectangleA.getTopLeft();
    Point2D bottomRightA = rectangleA.getBottomRight();

    Point2D topLeftB = rectangleB.getTopLeft();
    Point2D bottomRightB = rectangleB.getBottomRight();


    // Case 1: One rectangle above another
    if (bottomRightA.getY() > topLeftB.getY() || bottomRightB.getY() > topLeftA.getY())
        return false;

    // Case 2: One rectangle to the left of another
    if (bottomRightA.getX() < topLeftB.getX() || bottomRightB.getX() < topLeftB.getX())
        return false;

    // Neither cases are true, the rectangles must intersect
    return true;
}

// Tests
// 1. If the two rectangles are the exact same
// 2. If one rectangle is completely inside another
// 3. If one rectangle is to the right of another, and intersects
// 4. If one rectangle is to the right of another, and does not intersect
// 5. If one rectangle is above another, and intersects
// 6. If one rectangle is above another, and does not intersect
/*int main()
{
    Rectangle2D rectangleA = Rectangle2D(2, 1, 0, 0);
    Rectangle2D rectangleB = Rectangle2D(2, 1, 0, 0);

    if (checkIntersect(rectangleA, rectangleB))
        printf("1. Intersect\n");
    else
        printf("1. !Intersect\n");

    Rectangle2D rectangleC = Rectangle2D(2, 1, 0, 0);
    Rectangle2D rectangleD = Rectangle2D(4, 2, -1, -1);

    if (checkIntersect(rectangleC, rectangleD))
        printf("2. Intersect\n");
    else
        printf("2. !Intersect\n");

    Rectangle2D rectangleE = Rectangle2D(2, 1, 0, 0);
    Rectangle2D rectangleF = Rectangle2D(2, 1, 1, 0);

    if (checkIntersect(rectangleE, rectangleF))
        printf("3. Intersect\n");
    else
        printf("3. !Intersect\n");

    Rectangle2D rectangleG = Rectangle2D(2, 1, 0, 0);
    Rectangle2D rectangleH = Rectangle2D(2, 1, 3, 0);

    if (checkIntersect(rectangleG, rectangleH))
        printf("4. Intersect\n");
    else
        printf("4. !Intersect\n");

    Rectangle2D rectangleI = Rectangle2D(2, 1, 0, 0);
    Rectangle2D rectangleJ = Rectangle2D(2, 1, 0, 1);

    if (checkIntersect(rectangleI, rectangleJ))
        printf("5. Intersect\n");
    else
        printf("5. !Intersect\n");

    Rectangle2D rectangleK = Rectangle2D(2, 1, 0, 0);
    Rectangle2D rectangleL = Rectangle2D(2, 1, 0, 2);

    if (checkIntersect(rectangleK, rectangleL))
        printf("6. Intersect\n");
    else
        printf("6. !Intersect\n");

    return 0;
}*/
