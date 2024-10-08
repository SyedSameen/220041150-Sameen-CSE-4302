#include "Coordinate.h"
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

Point::Point(float x, float y) : x_coord(x), y_coord(y) {}

void Point::show()
{
    cout << "(" << x_coord << ", " << y_coord << ")" << endl;
}

float Point::distance(Point p)
{
    return sqrt(pow(x_coord - p.x_coord, 2) + pow(y_coord - p.y_coord, 2));
}

float Point::originDistance()
{
    return sqrt(pow(x_coord, 2) + pow(y_coord, 2));
}

void Point::moveX(float val)
{
    x_coord += val;
}

void Point::moveY(float val)
{
    y_coord += val;
}

void Point::moveXY(float x_val, float y_val)
{
    x_coord += x_val;
    y_coord += y_val;
}

bool Point::operator>(Point p)
{
    return this->originDistance() > p.originDistance();
}

bool Point::operator<(Point p)
{
    return this->originDistance() < p.originDistance();
}

bool Point::operator>=(Point p)
{
    return this->originDistance() >= p.originDistance();
}

bool Point::operator<=(Point p)
{
    return this->originDistance() <= p.originDistance();
}

bool Point::operator==(Point p)
{
    return this->originDistance() == p.originDistance();
}

bool Point::operator!=(Point p)
{
    return this->originDistance() != p.originDistance();
}

void randomAssign(Point p[], int size)
{
    srand(time(0));
    for (int i = 0; i < size; i++)
    {
        float x = (rand() % 200) - 100 + (rand() % 100) / 100.0;
        float y = (rand() % 200) - 100 + (rand() % 100) / 100.0;
        p[i] = Point(x, y);
    }
}

void sortPoints(Point p[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (p[i] > p[j])
            {
                Point temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }
}
