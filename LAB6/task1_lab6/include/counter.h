#ifndef COUNTER_H
#define COUNTER_H

class Counter
{
private:
    int count;
    int incrementStep;
public:
    Counter(int val = 1);
    void setIncrementStep(int step_val);
    int getCount();
    void increment();
    void resetCount(int val = 1);
    Counter operator+(Counter& other);
    Counter& operator+=(Counter& other);
    bool operator==(Counter& other);
    bool operator!=(Counter& other);
    bool operator<(Counter& other);
    bool operator>(Counter& other);
    bool operator<=(Counter& other);
    bool operator>=(Counter& other);
    Counter operator++(int);
    Counter operator++();
};

#endif // COUNTER_H
