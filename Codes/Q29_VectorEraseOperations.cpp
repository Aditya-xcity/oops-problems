/*
Q. You are provided with a vector of N integers. Then, you are given 2 queries. 
   For the first query, you are provided with 1 integer, which denotes a position 
   in the vector. The value at this position in the vector needs to be erased. 
   The next query consists of 2 integers denoting a range of the positions in 
   the vector. The elements which fall under that range should be removed. 
   The second query is performed on the updated vector which we get after 
   performing the first query.

Name   - ADITYA BHARDWAJ
Section- D2
Roll No- 08
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
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    int x;
    cin >> x;
    v.erase(v.begin() + x - 1);  // erase single element
    
    int a, b;
    cin >> a >> b;
    v.erase(v.begin() + a - 1, v.begin() + b);  // erase from a to b-1
    
    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++) {
        cout << v[i];
        if (i < v.size() - 1) {
            cout << " ";
        }
    }
    cout << endl;
    
    return 0;
}
