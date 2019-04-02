#ifndef VGEOMETRY_VGEOMETRY_INTERFACE_ILINE_H_
#define VGEOMETRY_VGEOMETRY_INTERFACE_ILINE_H_

namespace vgeometry
{

class ILine
{
private:
    /* data */
public:
    virtual ~ILine() {}
    virtual int formula(double x1, double y1, double x2, double y2, double& a, double &b, double& c) = 0;
};

} // vgeometry

#endif