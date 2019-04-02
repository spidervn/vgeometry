
#include "Intersection.h"

namespace vgeometry
{

Intersection::Intersection(/* args */)
{
}

Intersection::~Intersection()
{
}

IntersectionType Intersection::Intersect(const Circle& c, const Triangle& t)
{
    // Check Line between segments 
    

    return IntersectionType::NO;
}

IntersectionType Intersection::Intersect(const Circle& c, const LineSegment& l)
{
    // Check Intersection between Line & Circle 


    return IntersectionType::NO;
}

IntersectionType Intersection::Intersect(const Circle& c, const Line& l)
{
    // unit Vector of line
    Vector2D v(0,0);
    double d;   // distance betwwen center of C to l

    

    return IntersectionType::NO;
}

} // vgeometry
