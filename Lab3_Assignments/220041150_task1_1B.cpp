#include<iostream>
using namespace std;
class Counter
{
private:
    int count=0;
    int step;
public:
    void setIncrementStep(int step)
    {
        this->step=step;
    }
    int getCount()
    {
        return count;
    }
    void increment()
    {
        count+=this->step;
    }
    void resetCount()
    {
        count=0;
    }
};
int main()
{
    Counter counter;
    counter.setIncrementStep(2);
    counter.increment();
    cout<<counter.getCount()<<endl;
    counter.increment();
    cout<<counter.getCount()<<endl;
    counter.resetCount();
    cout<<counter.getCount()<<endl;
    return 0;
}
