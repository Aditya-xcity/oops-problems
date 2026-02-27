/*
Q. Create a base class called CAL_AREA(Abstract). Use this class to store 
   float type values that could be used to compute the volume of figures. Derive 
   two specific classes called cone, hemisphere and cylinder from the base 
   CAL_AREA. Add to the base class, a member function getdata() to initialize 
   base class data members and another member function display_volume() to 
   compute and display the volume of figures. Make display_volume() as a 
   pure virtual function and redefine this function in the derived classes to suit 
   their requirements. Using these three classes, design a program that will 
   accept dimensions of a cone, cylinder and hemisphere interactively and 
   display the volumes. Remember values given as input will be and used as 
   follows: 
   Volume of cone = (1/3)πr²h 
   Volume of hemisphere = (2/3)πr³ 
   Volume of cylinder = πr²h

Name   - ADITYA BHARDWAJ
Section- D2
Roll No- 08
Course – B TECH
Branch – CSE
*/

#include <iostream>
#include <cmath>
using namespace std;

const float PI = 3.14159;

class CAL_AREA {
protected:
    float r;
    float h;

public:
    void getdata() {
        cout << "Enter radius: ";
        cin >> r;
    }

    virtual void display_volume() = 0;
};

class Cone : public CAL_AREA {
public:
    void getdata() {
        CAL_AREA::getdata();
        cout << "Enter height: ";
        cin >> h;
    }

    void display_volume() override {
        float volume = (1.0 / 3.0) * PI * r * r * h;
        cout << "\n=== Cone ===" << endl;
        cout << "Radius: " << r << ", Height: " << h << endl;
        cout << "Volume of Cone: " << volume << endl;
    }
};

class Hemisphere : public CAL_AREA {
public:
    void display_volume() override {
        float volume = (2.0 / 3.0) * PI * r * r * r;
        cout << "\nHemisphere" << endl;
        cout << "Radius: " << r << endl;
        cout << "Volume of Hemisphere: " << volume << endl;
    }
};

class Cylinder : public CAL_AREA {
public:
    void getdata() {
        CAL_AREA::getdata();
        cout << "Enter height: ";
        cin >> h;
    }

    void display_volume() override {
        float volume = PI * r * r * h;
        cout << "\nCylinder" << endl;
        cout << "Radius: " << r << ", Height: " << h << endl;
        cout << "Volume of Cylinder: " << volume << endl;
    }
};

int main() {
    int choice;
    CAL_AREA* shapePtr;

    cout << "Choose shape:" << endl;
    cout << "1. Cone" << endl;
    cout << "2. Hemisphere" << endl;
    cout << "3. Cylinder" << endl;
    cout << "Enter your choice (1, 2, or 3): ";
    cin >> choice;

    if (choice == 1) {
        Cone cone;
        shapePtr = &cone;
        cone.getdata();
        shapePtr->display_volume();
    }
    else if (choice == 2) {
        Hemisphere hemisphere;
        shapePtr = &hemisphere;
        hemisphere.getdata();
        shapePtr->display_volume();
    }
    else if (choice == 3) {
        Cylinder cylinder;
        shapePtr = &cylinder;
        cylinder.getdata();
        shapePtr->display_volume();
    }
    else {
        cout << "Invalid choice!" << endl;
        return 1;
    }

    cout << "\n\nDemonstrating All Shapes" << endl;
    Cone c;
    Hemisphere h;
    Cylinder cy;

    CAL_AREA* shapes[3];

    cout << "\nEnter Cone dimensions:" << endl;
    c.getdata();
    shapes[0] = &c;

    cout << "\nEnter Hemisphere dimensions:" << endl;
    h.getdata();
    shapes[1] = &h;

    cout << "\nEnter Cylinder dimensions:" << endl;
    cy.getdata();
    shapes[2] = &cy;

    cout << "\nDisplaying Volumes" << endl;
    for (int i = 0; i < 3; i++) {
        shapes[i]->display_volume();
    }

    return 0;
}
