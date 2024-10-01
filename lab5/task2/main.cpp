#include <iostream>
#include "Employee.h"
using namespace std;
int main()
{
    const int num = 3;
    Employee employees[num];
    for (int i = 0; i < num; i++)
    {
        cout << "Set info for employee " << (i + 1) << ":\n";
        employees[i].setInfo();
        cout << endl;
    }
    for (int i = 0; i < num; i++)
    {
        cout << "Information for Employee " << (i + 1) << ":\n";
        employees[i].getInfo();
        cout << endl;
    }
    Employee elder = employees[0].compare(employees[1]);
    cout << "Elder Employee between them is:\n";
    elder.getInfo();
    return 0;
}
