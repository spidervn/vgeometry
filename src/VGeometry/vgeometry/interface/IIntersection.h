#ifndef VGEOMETRY_VGEOMETRY_INTERFACE_IINTERSECTION_H_
#define VGEOMETRY_VGEOMETRY_INTERFACE_IINTERSECTION_H_

#include "data_struct.h"

namespace vgeometry
{

class IIntersection
{
public:
    virtual ~IIntersection() {}
    virtual IntersectionType Intersect(const Line& l1, const Line& l2) = 0;
    virtual IntersectionType Intersect(const Circle& c, const Triangle& t) = 0;
    virtual IntersectionType Intersect(const Circle& c, const LineSegment& l) = 0;
    virtual IntersectionType Intersect(const Circle& c, const Line& l) = 0;
};

}

#endif