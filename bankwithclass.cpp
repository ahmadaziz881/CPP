#include <iostream>
using namespace std;
class Bank
{
private:
    string name;
    int accountno;
    float balance;

public:
    // constructor with three arguments
    Bank(string n, int acn, float b)
    {
        name = n;
        accountno = acn;
        balance = b;
    }
    void deposit(float amount)
    {
        balance += amount;
        cout << "Deposited Successfully" << endl;
    }
    void withdraw(float amount)
    {
        if (amount > balance)
        {
            cout << "Insufficient balance" << endl;
        }
        else if (amount <= 0)
        {
            cout << "Invalid Amount " << endl;
        }
        else
        {
            balance -= amount;
            cout << "Withdrawal Successfully" << endl;
        }
    }
    void showdetails()
    {
        cout << "Account Holder:" << name << endl;
        cout << "Account Number:" << accountno << endl;
        cout << "Current Balance:" << balance << endl;
    }
};

int main()
{
    Bank a("Ahmad Aziz", 526, 5000);
    float amount;
    int choice;
    while (true)
    {
        cout << "=======  Bank Details  ======" << endl;
        cout << "1. Show Details" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Exit " << endl;
        cout << "Enter your choice:";
        cin >> choice;
        switch (choice)
        {
        case 1:
            a.showdetails();
            break;
        case 2:
            cout << "Enter deposit amount :";
            cin >> amount;
            a.deposit(amount);
            break;
        case 3:
            cout << "Enter withdraw amount :";
            cin >> amount;
            a.withdraw(amount);
            break;
        case 4:
            cout << "Exiting" << endl;
            return 0;

        default:
            cout << "Invalid choice!" << endl;
        }
    }
}