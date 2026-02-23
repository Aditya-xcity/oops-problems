/*Construct a C++ program that removes a specific character from a given 
string and return the updated string*/

// Name    - ADITYA BHARDWAJ
// Section - D2
// Roll No - 08
// Course  – B TECH
// Branch  – CSE

#include <iostream>
using namespace std;

int main()
{
    char box[100];
    char alpha;

    cout << "Please enter the string: ";
    cin >> box;

    cout << "Please enter the character to remove: ";
    cin >> alpha;

    int i = 0, j = 0;
    
    while (box[i] != '\0')
    {
        if (box[i] != alpha)
        {
            box[j] = box[i]; 
            j++;
        }
        i++;
    }
    box[j] = '\0'; 
    cout << "Updated string: " << box << endl;

    return 0;
}
