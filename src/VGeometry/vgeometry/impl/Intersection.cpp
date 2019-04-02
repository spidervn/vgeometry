
#include "Intersection.h"

namespace vgeometry
{

Intersection::Intersection(/* args */)
{
}

Intersection::~Intersection()
{
}

IntersectionType  Intersection::Intersect(const Line& l1, const Line& l2)
{
    //
    // ax + by + c = 0 
    // ax1 + by1 + c1 = 0
    //
    // <=> a x x1 + b y x1 + c x1 = 0
    // <=> 
    //      ax1 x + b y1 x + c x = 0
    // 


    return INTERSECTYPE_NO;
}

IntersectionType  Intersection::Intersect(const Circle& c, const Triangle& t)
{
    // Check Line between segments 
    

    return INTERSECTYPE_NO;
}

IntersectionType  Intersection::Intersect(const Circle& c, const LineSegment& l)
{
    // Check Intersection between Line & Circle 


    return INTERSECTYPE_NO;
}

IntersectionType  Intersection::Intersect(const Circle& c, const Line& l)
{
    // unit Vector of line
    Vector2D v(0,0);
    double d;   // distance betwwen center of C to l

    return INTERSECTYPE_NO;
}


} // vgeometry
