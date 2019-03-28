#ifndef VGEOMETRY_VGEOMETRY_INTERFACE_DATASTRUCT_H_
#define VGEOMETRY_VGEOMETRY_INTERFACE_DATASTRUCT_H_

namespace vgeometry
{

struct Line
{
    double x;
    double y;
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