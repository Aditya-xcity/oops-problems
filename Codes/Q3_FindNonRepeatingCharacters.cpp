// Question: Find all non-repeating characters in a string (without using any extra variable)

// Name    - ADITYA BHARDWAJ
// Section - D2
// Roll No - 08
// Course  – B TECH
// Branch  – CSE

#include <iostream>
using namespace std;

int main()
{
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);

    bool found = false;

    for (int i = 0; str[i] != '\0'; i++)
    {
        int count = 0;

        for (int j = 0; str[j] != '\0'; j++)
        {
            if (str[i] == str[j])
                count++;
        }

        if (count == 1)
        {
            cout << "Non-repeating character: " << str[i] << endl;
            found = true;
        }
    }

    if (!found)
        cout << "No non-repeating characters found." << endl;

    return 0;
}
