#ifndef VGEOMETRY_VGEOMETRY_IMPL_INTERSECTION_H_
#define VGEOMETRY_VGEOMETRY_IMPL_INTERSECTION_H_

#include "vgeometry/interface/IIntersection.h"

namespace vgeometry
{

class Intersection : public IIntersection
{
private:
    /* data */
public:
    Intersection(/* args */);
    virtual ~Intersection();
    IntersectionType Intersect(const Circle& c, const Triangle& t);
    IntersectionType Intersect(const Circle& c, const LineSegment& l);
    IntersectionType Intersect(const Circle& c, const Line& l);
};



} // vgeometry


#endif