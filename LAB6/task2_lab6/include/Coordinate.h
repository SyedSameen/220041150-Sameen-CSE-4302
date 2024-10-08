#ifndef COORDINATE_H
#define COORDINATE_H

class Point
{
private:
    float x_coord, y_coord;
public:
    Point(float x = 0, float y = 0);
    void show();
    float distance(Point p);
    float originDistance();
    void moveX(float val);
    void moveY(float val);
    void moveXY(float x_val, float y_val);
    bool operator>(Point p);
    bool operator<(Point p);
    bool operator>=(Point p);
    bool operator<=(Point p);
    bool operator==(Point p);
    bool operator!=(Point p);
};
void randomAssign(Point p[], int size);
void sortPoints(Point p[], int size);

#endif
