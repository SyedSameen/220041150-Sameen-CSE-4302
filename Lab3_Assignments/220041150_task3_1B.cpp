#include<iostream>
using namespace std;
class Time
{
private:
    int hour=0;
    int minute=0;
    int second=0;
    void valid()
    {
        if(second>=60)
        {
            minute+=second/60;
            second%=60;
        }
        if(minute>=60)
        {
            hour+=minute/60;
            minute%=60;
        }
        if(hour>=24)
        {
            hour%=24;
        }
    }
public:
    int hours()
    {
        return hour;
    }
    int minutes()
    {
        return minute;
    }
    int seconds()
    {
        return second;
    }
    void reset(int h,int m,int s)
    {
        hour=h;
        minute=m;
        second=s;
        valid();
    }
    void advance(int h, int m, int s)
    {
        hour+=h;
        minute+=m;
        second+=s;
        valid();
    }
    void print()
    {
        if(hour<10)
        {
            cout<<"0"<<hour<<":";
        }
        else
        {
            cout<<hour<<":";
        }
        if(minute<10)
        {
            cout<<"0"<<minute<<":";
        }
        else
        {
            cout<<minute<<":";
        }
        if(second<10)
        {
            cout<<"0"<<second<<endl;
        }
        else
        {
            cout<<second<<endl;
        }
    }
};
int main()
{
    Time t;
    t.reset(23,59,50);
    t.print();
    t.advance(0,0,15);
    t.print();
    t.reset(22,45,55);
    t.print();
    t.advance(1,30,70);
    t.print();
    return 0;
}
