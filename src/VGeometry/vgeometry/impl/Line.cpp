
#include "Line.h"

namespace vgeometry
{

Line::Line(/* args */)
{
}

Line::~Line()
{
}

int Line::formula(double x1, double y1, double x2, double y2, double& a, double &b, double& c)
{
    if (x1==x2 && y1==y2)
    {
        return 1;   // Invalid Line
    }
    else
    {
        //
        // c = 0
        // ax1 + by1 + c = 0
        // ax2 + by2 + c = 0
        // 
        // (*)
        // ax1x2 + by1x2 + cx2 = 0
        // ax2x1 + by2x1 + cx1 = 0
        // => 
        // b(y1x2 - y2x1) + (cx2-cx1) = 0
        // =>
        // b(y1x2-y2x1) = (cx1-cx2)
        // 
        
        double d = y1*x2 - y2*x1;
        if (d == 0)
        {
            if (x1 == x2)
            {
                a = 1;
                b = 0;
                c = -x1;
            }
            else
            {
                // 
                // @@
                // @@
                // 
            }
        }
        else
        {
            c = 1;
            b = (x1 - x2)/d;
            a = (y2 - y1)/d;
        }

        return 1;
    }

    return 0;
}

} // vgeometry
