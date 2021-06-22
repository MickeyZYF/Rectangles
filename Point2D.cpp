#include <iostream>
#include <string>
#include <vector>
#include "Point2D.h"

Point2D::Point2D()
{
    // this->x is the x value of Point2D class field
    this->x = 0;
    this->y = 0; 
}

Point2D::Point2D(float x, float y)
{
    this->x = x;
    this->y = y;
}
