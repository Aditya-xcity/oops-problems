/*
Q. Implement a C++ program to demonstrate the concept of data abstraction 
using the concept of Class and Objects.

Name   - ADITYA BHARDWAJ
Section- D2
Roll No- 08
Course – B TECH
Branch – CSE
*/

#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountHolder;
    double balance;

public:
    BankAccount(string name, double initialBalance) {
        accountHolder = name;
        balance = initialBalance;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited Rs. " << amount << " successfully.\n";
        } else {
            cout << "Invalid deposit amount.\n";
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn Rs. " << amount << " successfully.\n";
        } else {
            cout << "Insufficient balance or invalid amount.\n";
        }
    }
    void showBalance() {
        cout << "Current Balance: Rs. " << balance << endl;
    }
};

int main() {
    BankAccount acc("Aditya", 5000);

    acc.showBalance();
    acc.deposit(1500);
    acc.withdraw(2000);
    acc.showBalance();

    return 0;
}

/*
Sample Output:
Current Balance: Rs. 5000
Deposited Rs. 1500 successfully.
Withdrawn Rs. 2000 successfully.
Current Balance: Rs. 4500
*/
