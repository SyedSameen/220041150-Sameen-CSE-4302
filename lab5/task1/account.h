#include <string>
using namespace std;
class SavingsAccount {
private:
    string accName;
    string addr;
    double rate;
    double bal;
    double minBal;
public:
    void setInfo(string name, string address, double interestRate, double balance);
    void displayInfo();
    double calcInterest(int months) const;
    void disburseInterest(int months);
    void deposit(double amt);
    void withdraw(double amt);
    string getName();
};
