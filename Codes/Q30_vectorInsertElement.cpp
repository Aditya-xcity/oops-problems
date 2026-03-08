/*
Q. You are given a vector of N integers. After that, you are given two integers
P and X. Insert the value X at position P in the vector (1-based index).
Print the updated vector size and all elements of the vector.

Name - ADITYA BHARDWAJ
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

    vector<int> v(n);

    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int p, x;
    cin >> p >> x;

    v.insert(v.begin() + p - 1, x);

    cout << v.size() << endl;

    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    return 0;
}