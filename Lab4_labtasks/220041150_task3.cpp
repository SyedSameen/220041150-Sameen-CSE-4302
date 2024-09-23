#include <bits/stdc++.h>
using namespace std;
class BankAccount
{
private:
    int accnum;
    string holder;
    string type;
    int balance = 0;
    const int minbalance = 350;
    static int totalAccountsCreated;
    static int totalAccountsPresent;
    static float totalSourceTaxCollected;

public:
    BankAccount(int accNum, string holderName, string accType, int initialBalance)
    {
        accnum = accNum;
        holder = holderName;
        type = accType;
        balance = initialBalance;
        totalAccountsCreated++;
        totalAccountsPresent++;
    }
    void showInfo() const
    {
        cout << "Account no.: " << accnum << endl;
        cout << "Holder name: " << holder << endl;
        cout << "Account type: " << type << endl;
        cout << "Balance: BDT " << balance << endl;
    }
    int showBalance() const
    {
        return balance;
    }
    void deposit(int amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposited: BDT " << amount << ". New Balance: BDT " << balance << endl;
        }
        else
        {
            cout << "Invalid amount" << endl;
        }
    }
    void withdrawal(int amount)
    {
        if (amount > 0 && (balance - amount) >= minbalance)
        {
            balance -= amount;
            cout << "Withdrew: BDT " << amount << ". New Balance: BDT " << balance << endl;
        }
        else
        {
            cout << "Insufficient balance or withdrawal would breach minimum balance!" << endl;
        }
    }
    void giveInterest()
    {
        float interest = (balance * 3.0) / 100;
        float sourceTax = (interest * 10) / 100;
        balance += (interest - sourceTax);
        totalSourceTaxCollected += sourceTax;
        cout << "Interest deposited (after tax). New Balance: BDT " << balance << endl;
    }
    static int getTotalAccountsCreated()
    {
        return totalAccountsCreated;
    }
    static int getTotalAccountsPresent()
    {
        return totalAccountsPresent;
    }
    static float getTotalSourceTaxCollected()
    {
        return totalSourceTaxCollected;
    }
    ~BankAccount()
    {
        cout << "Account of Mr. " << holder << " with account no. " << accnum << " is destroyed with a balance of BDT " << balance << endl;
        totalAccountsPresent--;
    }
};
int BankAccount::totalAccountsCreated = 0;
int BankAccount::totalAccountsPresent = 0;
float BankAccount::totalSourceTaxCollected = 0.0;
void display_stat()
{
    cout << "Total Bank Accounts Created: " << BankAccount::getTotalAccountsCreated() << endl;
    cout << "Total Bank Accounts Present: " << BankAccount::getTotalAccountsPresent() << endl;
    cout << "Total Source Tax Collected: BDT " << BankAccount::getTotalSourceTaxCollected() << endl;
}
BankAccount &Larger(BankAccount &A, BankAccount &B)
{
    if (A.showBalance() > B.showBalance())
        return A;
    else
        return B;
}
int main()
{
    BankAccount acc1(123456, "nafis", "Savings", 4000);
    BankAccount acc2(123123, "sameen", "Current", 6500);
    acc1.showInfo();
    acc2.showInfo();
    acc1.deposit(500);
    acc2.withdrawal(1000);
    acc1.giveInterest();
    acc2.giveInterest();
    BankAccount &largerAccount = Larger(acc1, acc2);
    cout << "The account with the higher balance is:" << endl;
    largerAccount.showInfo();
    display_stat();
    return 0;
}
