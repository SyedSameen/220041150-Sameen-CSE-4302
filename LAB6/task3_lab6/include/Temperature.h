#ifndef TEMPERATURE_H
#define TEMPERATURE_H

#include <iostream>
#include <string>
using namespace std;

class Temperature {
private:
    float value;
    string unit;

    int isValid(string u);

public:
    Temperature();
    Temperature(float temp, string u);
    void assign(float temp, string u);
    float convert(string u2);
    void display();
};

#endif // TEMPERATURE_H
