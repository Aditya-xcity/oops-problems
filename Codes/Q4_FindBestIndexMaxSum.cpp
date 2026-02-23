/*
Q: You are given an array of elements. Find the best index such that
   the "special sum" starting at that index is maximum.
   Note: Only complete blocks are added (no partial blocks).

Name   - ADITYA BHARDWAJ
Section- D2
Roll No- 08
Course – B TECH
Branch – CSE
*/

#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[1000]; 
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxSum = INT_MIN;


    for (int start = 0; start < n; start++) {
        int block = 1;
        int sum = 0;
        int idx = start;

     
        while (idx + block - 1 < n) {
            for (int j = 0; j < block; j++) {
                sum += arr[idx + j];
            }
            idx += block;  
            block++;       
        }

        if (sum > maxSum) {
            maxSum = sum;
        }
    }

    cout << "Maximum Special Sum = " << maxSum << endl;

    return 0;
}


