//
// Created by Mickey Zhou on 2021-06-14.
//

#include "Point2D.h"

#ifndef RECTANGLE2D_H
#define RECTANGLE2D_H

// Axis-aligned Rectangle2D with floating-point coordinates
class Rectangle2D
{
private:
    float width;
    float height;

    // The bottom left is the "starting" point of the rectangle
    Point2D bottomLeft;
    Point2D bottomRight;
    Point2D topLeft;
    Point2D topRight;

public:
    Rectangle2D();
    // To construct a proper rectangle, we just need the "starting point", the width, and the height
    Rectangle2D(float width, float height, float x, float y);

    Point2D getBottomLeft() {return bottomLeft;};
    Point2D getBottomRight() {return bottomRight;};
    Point2D getTopLeft() {return topLeft;};
    Point2D getTopRight() {return topRight;};
};

// Takes two rectangles, check if they intersect
bool checkIntersect(Rectangle2D rectangleA, Rectangle2D rectangleB);

#endif
