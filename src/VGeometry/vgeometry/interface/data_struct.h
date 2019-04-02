#ifndef VGEOMETRY_VGEOMETRY_INTERFACE_DATASTRUCT_H_
#define VGEOMETRY_VGEOMETRY_INTERFACE_DATASTRUCT_H_

#include <math.h>

namespace vgeometry
{

enum IntersectionType 
{
    INTERSECTYPE_NO = 0,
    INTERSECTYPE_INTERSECT = 1, 
    INTERSECTYPE_ONEDGE = 2,
    INTERSECTYPE_DUPLICATE = 3
};

struct Vector2D
{
    double x;
    double y;

    Vector2D(double x1, double y1)
    {
        x = x1;
        y = y1;
    }

    double length()
    {
        return sqrt(x*x + y*y);
    }

    Vector2D unit()
    {
        double d = length();
        return Vector2D(x/d, y/d);
    }
};

struct Line
{
    double a;
    double b;
    double c;
    // ax + by + c = 0
};

struct LineSegment
{
    double x1;
    double y1;
    double x2;
    double y2;
};

struct Triangle
{
    double x1;
    double x2;
    double x3;
    double y1;
    double y2;
    double y3;
};

struct Circle
{
    double x;
    double y;
    double r;
};

}

#endif