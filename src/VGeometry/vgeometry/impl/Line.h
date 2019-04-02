#ifndef VGEOMETRY_VGEOMETRY_IMPL_LINE_H_    
#define VGEOMETRY_VGEOMETRY_IMPL_LINE_H_

#include "vgeometry/interface/ILine.h"

namespace vgeometry
{

class Line
{
private:
    /* data */
public:
    Line(/* args */);
    virtual ~Line();
    int formula(double x1, double y1, double x2, double y2, double& a, double &b, double& c);
};


} // vgeometry




#endif