//
// Created by Mickey Zhou on 2021-06-14.
//
#ifndef POINT2D_H
#define POINT2D_H

// A coordinate represented by two floats, x and y
class Point2D
{
private:
    float x;
    float y;

public:
    Point2D();
    Point2D(float x, float y);
    float getX(){return x;};
    float getY(){return y;};
};

#endif
