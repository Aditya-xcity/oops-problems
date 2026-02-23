/*
    Q. An electricity board charges the following rates to domestic users to discourage large consumption of energy:
    - For the first 100 units: 60 paisa per unit
    - For the next 200 units (i.e., 101 to 300): 80 paisa per unit
    - Beyond 300 units: 90 paisa per unit

    - All users are charged a minimum of Rs. 50.
    - If the total amount exceeds Rs. 300, an additional surcharge of 15% is added.

    Implement a C++ program to read the name of the user and number of units consumed and display the final bill amount with the user's name.
*/

// Name    - ADITYA BHARDWAJ
// Section - D2
// Roll No - 08
// Course  – B TECH
// Branch  – CSE

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    char name[100];
    int units;
    float amount = 0;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter the number of units consumed: ";
    cin >> units;

    if (units <= 100)
    {
        amount = units * 0.60f;
    }
    else if (units <= 300)
    {
        amount = (100 * 0.60f) + ((units - 100) * 0.80f);
    }
    else
    {
        amount = (100 * 0.60f) + (200 * 0.80f) + ((units - 300) * 0.90f);
    }

    if (amount < 50)
    {
        amount = 50;
    }

    if (amount > 300)
    {
        amount += amount * 0.15f;
    }

    cout << "      Electricity Bill\n";

    cout << "Name of Consumer   : " << name << endl;
    cout << "Units Consumed     : " << units << " units" << endl;
    cout << fixed << setprecision(2);
    cout << "Total Bill Amount  : Rs. " << amount << endl;

    return 0;
}
