#include "Temperature.h"

int Temperature::isValid(string u)
{
    if (u == "Celsius" || u == "Fahrenheit" || u == "Kelvin")
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
Temperature::Temperature() : value(0), unit("Celsius") {}

Temperature::Temperature(float temp, string u)
{
    assign(temp, u);
}

void Temperature::assign(float temp, string u)
{
    if (!isValid(u))
    {
        cout << "Invalid unit." << endl;
        return;
    }
    if ((u == "Celsius" && temp < -273.15) ||
            (u == "Fahrenheit" && temp < -459.67) ||
            (u == "Kelvin" && temp < 0))
    {
        cout << "Temperature cannot be below absolute zero." << endl;
        return;
    }
    value = temp;
    unit = u;
}

float Temperature::convert(string u2)
{
    if (!isValid(u2))
    {
        cout << "Invalid unit." << endl;
        return 0;
    }
    double result = value;
    if (unit == "Celsius")
    {
        if (u2 == "Fahrenheit")
        {
            result = value * 9 / 5 + 32;
        }
        else if (u2 == "Kelvin")
        {
            result = value + 273.15;
        }
    }
    else if (unit == "Fahrenheit")
    {
        if (u2 == "Celsius")
        {
            result = (value - 32) * 5 / 9;
        }
        else if (u2 == "Kelvin")
        {
            result = (value - 32) * 5 / 9 + 273.15;
        }
    }
    else if (unit == "Kelvin")
    {
        if (u2 == "Celsius")
        {
            result = value - 273.15;
        }
        else if (u2 == "Fahrenheit")
        {
            result = (value - 273.15) * 9 / 5 + 32;
        }
    }
    return result;
}

void Temperature::display()
{
    cout << "The temperature is " << value << " " << unit << "." << endl;
}
