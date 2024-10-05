#include "account.h"
#include <iostream>
using namespace std;
void SavingsAccount::setInfo(string name, string address, double interestRate, double balance) {
    accName = name;
    addr = address;
    rate = interestRate;
    bal = balance;
    minBal = balance;
}
void SavingsAccount::displayInfo() {
    cout << accName << " " << addr << " " << rate << " " << bal << "\n";
}
double SavingsAccount::calcInterest(int months) const {
    return minBal * (rate / 12.0 / 100.0) * months;
}
void SavingsAccount::disburseInterest(int months) {
    bal += calcInterest(months);
    minBal = bal;
}
void SavingsAccount::deposit(double amt) {
    if (amt > 0) {
        bal += amt;
        minBal = min(minBal, bal);
    }
}
void SavingsAccount::withdraw(double amt) {
    if (amt > 0 && bal >= amt) {
        bal -= amt;
        minBal = min(minBal, bal);
    }
}
string SavingsAccount::getName() {
    return accName;
}
