#include "Employee.h"
Employee::Employee() : name("John Doe"), dateOfBirth("2002-01-01"), salary(10000) {}
string Employee::getName() const
{
    return name;
}
string Employee::getDateOfBirth() const
{
    return dateOfBirth;
}
double Employee::getSalary() const
{
    return salary;
}
void Employee::setName(const string& name)
{
    if (name.length() > 2)
    {
        this->name = name;
    }
    else
    {
        this->name = "John Doe";
    }
}
void Employee::setDateOfBirth(const string& dob)
{
    int year = stoi(dob.substr(0, 4));
    if (year <= 2005)
    {
        dateOfBirth = dob;
    }
    else
    {
        dateOfBirth = "2002-01-01";
    }
}
void Employee::setSalary(double salary)
{
    if (salary >= 10000 && salary <= 100000)
    {
        this->salary = salary;
    }
    else
    {
        this->salary = 10000;
    }
}
void Employee::setInfo()
{
    string inputName, inputDOB;
    double inputSalary;
    cout << "Enter employee name: ";
    getline(cin, inputName);
    setName(inputName);
    cout << "Enter date of birth (YYYY-MM-DD): ";
    getline(cin, inputDOB);
    setDateOfBirth(inputDOB);
    cout << "Enter salary: ";
    cin >> inputSalary;
    setSalary(inputSalary);
    cin.ignore();
}
void Employee::getInfo() const
{
    cout << "Name: " << getName() << endl;
    cout << "Date of Birth: " << getDateOfBirth() << endl;
    cout << "Salary: " << getSalary() << endl;
}
const Employee Employee::compare(const Employee& old) const
{
    int Age1 = stoi(dateOfBirth.substr(0, 4));
    int Age2 = stoi(old.getDateOfBirth().substr(0, 4));
    if (Age1 < Age2)
    {
        return *this;
    }
    else
    {
        return old;
    }
}
