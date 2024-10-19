#include <iostream>
using namespace std;
class rational
{
private:
    int a,b;
public:
    rational ()
    {
        a=0;
        b=1;
    }
    rational (int p, int q)
    {
        if(q != 0)
        {
            a=p;
            b=q;
        }
        else
        {
            cout<<"irrational input"<<endl;
        }
    }
    void dis()
    {
        cout<<a<<"/"<<b<<endl;
    }

    rational operator+(rational m)
    {
        rational temp;
        temp.a = (a * m.b) + (m.a * b);
        temp.b = b * m.b;
        return temp;
    }

    rational operator-(rational m)
    {
        rational temp;
        temp.a = (a * m.b) - (m.a * b);
        temp.b = b * m.b;
        return temp;
    }

    rational operator*(rational m)
    {
        rational temp;
        temp.a = a * m.a;
        temp.b = b * m.b;
        return temp;
    }

    rational operator/(rational m)
    {
        rational temp;
        temp.a = a * m.b;
        temp.b = b * m.a;
        return temp;
    }
};
int main()
{
    rational r1(2,3);
    rational r2(4,5);
    rational r3 = r1 + r2;
    rational r4 = r1 - r2;
    rational r5 = r1 * r2;
    rational r6 = r1 / r2;
    r3.dis();
    r4.dis();
    r5.dis();
    r6.dis();
    return 0;
}
