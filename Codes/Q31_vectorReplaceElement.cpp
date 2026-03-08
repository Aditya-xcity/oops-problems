/*
Q. You are given a vector of N integers. Then you are given two integers
P and X. Replace the element at position P with value X.
Print the updated vector.

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

    v[p - 1] = x;

    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    return 0;
}