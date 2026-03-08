/*
Q. You are given a vector of N integers. Then you are given two operations.

   1) Insert Operation:
      You are given two integers P and X. Insert the value X at position P 
      in the vector (1-based index).

   2) Replace Operation:
      You are given two integers A and B. Replace the value at position A 
      with the value B in the updated vector obtained after the first operation.

   After performing both operations, print the final size of the vector
   and the elements of the vector.

Name   - ADITYA BHARDWAJ
Section - D2
Roll No - 07
Course – B TECH
Branch – CSE
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> numbers(n);

    for(int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    int position, value;
    cin >> position >> value;

    numbers.insert(numbers.begin() + position - 1, value);

    int replacePos, newValue;
    cin >> replacePos >> newValue;

    numbers[replacePos - 1] = newValue;

    cout << numbers.size() << endl;

    for(int i = 0; i < numbers.size(); i++) {
        cout << numbers[i];
        if(i < numbers.size() - 1) {
            cout << " ";
        }
    }

    cout << endl;

    return 0;
}