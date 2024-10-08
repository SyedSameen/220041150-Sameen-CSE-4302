#include "Coordinate.h"
#include <iostream>
using namespace std;
int main()
{
    Point points[10];
    randomAssign(points, 10);
    sortPoints(points, 10);
    for (int i = 0; i < 10; i++)
    {
        points[i].show();
    }
    return 0;
}
