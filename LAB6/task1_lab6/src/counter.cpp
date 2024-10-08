#include "Counter.h"
#include <iostream>
using namespace std;
Counter::Counter(int val) : count(0)
{
    if (val > 0)
    {
        incrementStep = val;
    }
    else
    {
        incrementStep = 1;
    }
}
void Counter::setIncrementStep(int steps)
{
    if (count == 0)
    {
        if (steps > 0)
        {
            incrementStep = steps;
        }
        else
        {
            cout << "Invalid: negative value" << endl;
        }
    }
    else
    {
        cout << "count is not zero." << endl;
    }
}
int Counter::getCount()
{
    return count;
}
void Counter::increment()
{
    count += incrementStep;
}
void Counter::resetCount(int step)
{
    count = 0;
    if (step > 0)
    {
        incrementStep = step;
    }
    else
    {
        incrementStep = 1;
    }
}
Counter Counter::operator+(Counter& other)
{
    if (this->incrementStep == other.incrementStep)
    {
        Counter result;
        result.count = this->count + other.count;
        result.incrementStep = this->incrementStep;
        return result;
    }
    else
    {
        cout << "Increment steps are not the same." << endl;
        return -1;
    }
}
Counter& Counter::operator+=(Counter& other)
{
    this->count += other.count;
    if (this->incrementStep < other.incrementStep)
    {
        this->incrementStep = other.incrementStep;
    }
    return *this;
}
bool Counter::operator==(Counter& other)
{
    return this->count == other.count;
}
bool Counter::operator!=(Counter& other)
{
    return this->count != other.count;
}
bool Counter::operator<(Counter& other)
{
    return this->count < other.count;
}
bool Counter::operator>(Counter& other)
{
    return this->count > other.count;
}
bool Counter::operator<=(Counter& other)
{
    return this->count <= other.count;
}
bool Counter::operator>=(Counter& other)
{
    return this->count >= other.count;
}
Counter Counter::operator++(int)
{
    Counter temp = *this;
    this->increment();
    return temp;
}
Counter Counter::operator++()
{
    this->increment();
    Counter temp = *this;
    return temp;
}
