#include <iostream>
using namespace std;
class Calculator
{
private:
    int currentstatus;
    int getstatus()
    {
        return currentstatus;
    }
    void setstatus(int num)
    {
        currentstatus=num;
    }
public:
    Calculator()
    {
        currentstatus=0;
    }
    void display()
    {
        cout<<"Calculator Display : "<<currentstatus<<endl;
    }
    void add(int value)
    {
        currentstatus+=value;
    }
    void subtract(int value)
    {
        currentstatus-=value;
    }
    void multiply(int value)
    {
        currentstatus*=value;
    }
    int divide(int value)
    {
        if(value!=0)
        {
            currentstatus /= value;
            return (currentstatus%value);
        }
    }
    void clear()
    {
        currentstatus=0;
    }
    ~Calculator()
    {
        display();
        cout<<"Destructor of the object is called"<<endl;
    }
};
int main()
{
    Calculator cal;
    cal.add(10);cal.display();
    cal.add(7);cal.display();
    cal.multiply(31);cal.display();
    cal.subtract(42);cal.display();
    cal.divide(7);cal.display();
    cal.divide(0);cal.display();
    cal.add(3);cal.display();
    cal.clear();cal.display();
    return 0;
}