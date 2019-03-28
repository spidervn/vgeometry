#ifndef VGEOMETRY_VGEOMETRY_INTERFACE_IINTERSECTION_H_
#define VGEOMETRY_VGEOMETRY_INTERFACE_IINTERSECTION_H_

#include "data_struct.h"

namespace vgeometry
{

class IIntersection
{
public:
    virtual ~IIntersection() {}
    virtual int Intersect(const Circle& c, const Triangle& t) = 0;
};

}

#endif