/*
Q. You are given a vector of N integers and a number X. Check whether X
exists in the vector. If found print "Found", otherwise print "Not Found".

Name - ADITYA BHARDWAJ
Section - D2
Roll No - 07
Course – B TECH
Branch – CSE
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);

    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int x;
    cin >> x;

    if(find(v.begin(), v.end(), x) != v.end()) {
        cout << "Found";
    } else {
        cout << "Not Found";
    }

    return 0;
}