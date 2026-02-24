/*Define a class Hotel in C++ with the following specifications 
Private members 
• Rno Data member to store room number 
• Name Data member to store customer name 
• Tariff Data member to store per day charges 
• NOD Data member to store number of days of stay 
• CALC() Function to calculate and return amount as NOD*Tariff ,and if the 
value of days* Tariff >10000, 
then total amount is 1.05* days*Tariff. 
Public members 
• Checkin() Function to enter the content Rno, Name, Tariff and NOD 
• Checkout() Function to display Rno, Name, Tariff, 
NOD and Amount (amount to be displayed by calling function) CALC() */

// Name    - ADITYA BHARDWAJ
// Section - D2
// Roll No - 08
// Course  – B TECH
// Branch  – CSE


#include<iostream>
using namespace std;

class Hotel{
    private:
        int roomNumber;
        char Name[100];
        float Tarrif;
        int Nod;
        float amount;
        float amt;

        float calc()
        {
            float amount = Nod*Tarrif;
            if(amount>10000)
            {
                amount = amount*1.05;
            }
            return amount;
        }

public:
    void Checkin() {
        cout << "Enter Room Number: ";
        cin >> roomNumber;
        cout << "Enter Customer Name: ";
        cin>>Name;
        cout << "Enter Tariff per day: ";
        cin >> Tarrif;
        cout << "Enter Number of Days: ";
        cin >> Nod;

        amt = calc(); 
    }

    void Checkout() {
        cout << "\n bill \n";
        cout << "Room Number  : " << roomNumber << endl;
        cout << "Customer Name: " << Name << endl;
        cout << "Tariff/Day   : Rs. " << Tarrif << endl;
        cout << "Days Stayed  : " << Nod << endl;
        cout << "Total Amount : Rs. " << amt << endl;
    }
    

};

int main()
{
    Hotel h;
    h.Checkin();
    h.Checkout();
    return 0;
}