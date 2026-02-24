/*
Construct a Program in C++ to show the working of function 
overloading(compile time polymorphism) by using a function named 
calculate Area () to calculate area of square, rectangle and triangle using 
different signatures as required. 

Name   - ADITYA BHARDWAJ
Section- D2
Roll No- 08
Course – B TECH
Branch – CSE
*/

#include <iostream>
#include <cmath>
using namespace std;

// Overloaded functions
void Area(int s) {
    cout << "Area of Square: " << s * s << endl;
}

void Area(int l, int b) {
    cout << "Area of Rectangle: " << l * b << endl;
}

void Area(float a, float b, float c) {
    float s = (a + b + c) / 2.0f;
    float A = sqrt(s * (s - a) * (s - b) * (s - c));
    cout << "Area of Triangle: " << A << endl;
}

void Area(double radius) {
    cout << "Area of Circle: " << 3.14 * radius * radius << endl;
}

int main() {
    // Square
    cout << "Enter side of square: ";
    int s;
    cin >> s;
    Area(s);

    // Rectangle
    cout << "Enter length and breadth of rectangle: ";
    int l, b;
    cin >> l >> b;
    Area(l, b);

    // Triangle
    cout << "Enter three sides of triangle: ";
    float a, b1, c;
    cin >> a >> b1 >> c;
    Area(a, b1, c);

    // Circle
    cout << "Enter radius of circle: ";
    double r;
    cin >> r;
    Area(r);

    return 0;
}

/*
Sample Run:
Enter side of square: 4
Area of Square: 16
Enter length and breadth of rectangle: 5 6
Area of Rectangle: 30
Enter three sides of triangle: 3 4 5
Area of Triangle: 6
Enter radius of circle: 7
Area of Circle: 153.86
*/
