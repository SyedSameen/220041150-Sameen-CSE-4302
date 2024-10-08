#include <iostream>
#include "Counter.h"
using namespace std;

int main() {
    Counter c1;
    Counter c2;
    Counter c3;
    c2.setIncrementStep(8);
    c3.setIncrementStep(8);
    c2.increment();
    c3.increment();
    cout << "c1: " << c1.getCount() << endl;
    cout << "c2: " << c2.getCount() << endl;
    cout << "c3: " << c3.getCount() << endl;
    Counter c4 = c2 + c3;
    cout << "c4 : " << c4.getCount() << endl;
    c1 += c2;
    cout << "c1 += c2 : " << c1.getCount() << endl;
    ++c2;
    cout << "c2 after prefix increment: " << c2.getCount() << endl;
    c3++;
    cout << "c3 after postfix increment: " << c3.getCount() << endl;
    if(c1>=c2)
        cout<<"c1 is no less than c2";
    else
        cout<<"c1 is less than c2";
    return 0;
}
