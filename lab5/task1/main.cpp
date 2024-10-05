#include "account.h"
#include <iostream>
#include <ctime>
using namespace std;
void editByKeyboard(SavingsAccount& acc)
{
    string name, address;
    double balance, rate;
    cout<<"Enter Name: \n";
    getline(cin, name);
    cout<<"Enter address: \n";
    getline(cin, address);
    cout<<"Enter balance: \n";
    cin >> balance;
    cout<<"Enter rate: \n";
    cin >> rate;
    acc.setInfo(name, address, rate, balance);
}
void generateRandom(SavingsAccount& acc)
{
    string name = "Acc_" + to_string(rand() % 1000);
    string address = "Addr_" + to_string(rand() % 1000);
    double rate = 2.0 + (rand() % 31) / 10.0;
    double balance = 1000 + rand() % 50000;
    acc.setInfo(name, address, rate, balance);
}
void showInterestAll(SavingsAccount acc[], int n)
{
    int months;
    cin >> months;
    for (int i = 0; i < n; i++)
    {
        cout << acc[i].calcInterest(months) << "\n";
    }
    char confirm;
    cin >> confirm;
    if (confirm == 'y')
    {
        for (int i = 0; i < n; i++)
        {
            acc[i].disburseInterest(months);
        }
    }
}
void showAllAlphabetically(SavingsAccount acc[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (acc[j].getName() > acc[j + 1].getName())
            {
                SavingsAccount temp = acc[j];
                acc[j] = acc[j + 1];
                acc[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        acc[i].displayInfo();
    }
}
int main()
{
    srand(time(0));
    SavingsAccount acc[100];
    for (int i = 0; i < 2; i++)
    {
        editByKeyboard(acc[i]);
    }
    for (int i = 2; i < 100; i++)
    {
        generateRandom(acc[i]);
    }
    showInterestAll(acc, 100);
    showAllAlphabetically(acc, 100);
}
