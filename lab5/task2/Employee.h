#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
#include <string>
using namespace std;
class Employee
{
private:
    string name;
    string dateOfBirth;
    double salary;

public:
    Employee();
    string getName() const;
    string getDateOfBirth() const;
    double getSalary() const;
    void setName(const string& name);
    void setDateOfBirth(const string& dob);
    void setSalary(double salary);
    void setInfo();
    void getInfo() const;
    const Employee compare(const Employee& old) const;
};
#endif // EMPLOYEE_H
