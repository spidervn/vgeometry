
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
    // a1x1 + b1y1 + c1 = 0
    //
    // axa1 + b a1 y + c a1 
    // a1xa + b1 a y + c1 a 
    // 
    // y(ba1 - ab1) + (ca1-ac1) = 0
    // 
    // c[1]a - ca[1]
    // (ba[1] - ab[1])
    // 
    // (c[1]a - ca[1])/(a[1]b-ab[1])
    //  
    //
    double d = l1.b * l2.a - l1.a * l2.b;
    if (d != 0)
    {
        double y = (l2.c * l1.a - l2.a * l1.c)/d;
        double x = (l2.b * l1.c - l2.c * l1.b)/d;

        return INTERSECTYPE_INTERSECT;
    }
    else if (l1.a == l2.a && l1.b == l2.b && l1.c == l2.c)
    {
        return INTERSECTYPE_DUPLICATE;
    }
    else
    {
        return INTERSECTYPE_NO;
    }
}

IntersectionType Intersection::Intersect(const LineSegment& l1, const LineSegment& l2)
{
    

    return INTERSECTYPE_DUPLICATE;
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
