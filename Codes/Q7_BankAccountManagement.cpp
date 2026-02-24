/*
Implement a Program in C++ by defining a class to represent a bank
account.

Include the following:
Data Members
● Name of the depositor
● Account number
● Type of account (Saving, Current etc.)
● Balance amount in the account

Member Functions
● To assign initial values
● To deposit an amount
● To withdraw an amount after checking the balance
● To display name and balance
*/


// Name    - ADITYA BHARDWAJ
// Section - D2
// Roll No - 08
// Course  – B TECH
// Branch  – CSE

#include <iostream>

using namespace std;

class Bank
{
private:
    char name[100];
    long long int account_no;
    char account_type[20];
    float balance;

public:
    void Checkin()
    {
        int accType, operation;
        float amount;

        cout << "Enter account number: ";
        cin >> account_no;
        cout << "Enter Customer Name: ";
        cin >> name;

        cout << "Enter your type of bank account:" << endl;
        cout << "1: Saving" << endl;
        cout << "0: Current" << endl;
        cin >> accType;

        cout << "Enter initial balance: ";
        cin >> balance;

        cout << "Enter the operation you want to perform:" << endl;
        cout << "1: Withdraw" << endl;
        cout << "0: Deposit" << endl;
        cin >> operation;

        if (operation == 1)
        {
            cout << "Enter amount to withdraw: ";
            cin >> amount;

            if (amount > balance)
            {
                cout << "Insufficient balance Withdrawal failed." << endl;
            }
            else
            {
                balance = balance - amount;
                cout << "Withdrawal successful!" << endl;
            }
        }
        else
        {
            cout << "Enter amount to deposit: ";
            cin >> amount;
            balance = balance + amount;
            cout << "Deposit successful" << endl;
        }

        cout << "Name: " << name << endl;
        cout << "Account Number: " << account_no << endl;

        cout << "Current Balance: " << balance << endl;

        cout << "Account Type: " << endl;

        if (accType == 1)
        {
            cout << "\nsavings";
        }
        else
        {
            cout << "\ncurrent";
        }
    }
};

int main()
{
    Bank b;
    b.Checkin();
    return 0;
}
