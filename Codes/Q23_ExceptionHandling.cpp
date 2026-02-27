/*
Q. Extend the code to handle std::invalid_argument exception in process_input 
   function. It takes integer n as an argument and has to work as follows: 
   1. It calls function largest_proper_divisor(n). 
   2. If this call returns a value without raising an exception, it should print 
      in a single line result=d where d is the returned value. 
   3. Otherwise, if the call raises an invalid_argument exception, it has to print 
      in a single line the string representation of the raised exception, i.e., its 
      message. 
   4. Finally, no matter if the exception is raised or not, it should print in a 
      single line returning control flow to the caller after any other previously 
      printed output.

Name   - ADITYA BHARDWAJ
Section- D2
Roll No- 08
Course – B TECH
Branch – CSE
*/

#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;

int largest_proper_divisor(int n) {
    if (n == 0) {
        throw invalid_argument("the largest proper divisor is not defined for n=0");
    }
    if (n == 1) {
        throw invalid_argument("the largest proper divisor is not defined for n=1");
    }
    for (int i = n/2; i >= 1; i--) {
        if (n % i == 0) {
            return i;
        }
    }
    return -1;
}

void process_input(int n) {
    try {
        int d = largest_proper_divisor(n);
        cout << "result=" << d << endl;
    }
    catch (const invalid_argument& e) {
        cout << e.what() << endl;
    }
    cout << "returning control flow to the caller" << endl;
}

int main() {
    int n;
    cin >> n;
    process_input(n);
    return 0;
}
