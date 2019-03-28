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
    int Intersect(const Circle& c, const Triangle& t);
};



} // vgeometry


#endif