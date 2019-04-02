#include <stdlib.h>
#include <stdio.h>

#include "vgeometry/impl/Intersection.h"

using namespace vgeometry;

int main(int argc, char const *argv[])
{
    printf("VGeometry\r\n");

    IIntersection* p = new Intersection();
    int n = p->Intersect(Circle(), Triangle());

    printf("Intersect = %d\r\n");
    return 0;
}
