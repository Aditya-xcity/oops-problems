/*
Q. Write a C++ program to retrieve a particular record from a file.

Name   - ADITYA BHARDWAJ
Section- D2
Roll No- 08
Course – B TECH
Branch – CSE
*/

#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

struct Student {
    int rollNo;
    char name[50];
    float marks;
};

void writeRecords() {
    ofstream outFile("students.dat", ios::binary);
    if (!outFile) {
        cout << "Error creating file!" << endl;
        return;
    }

    Student s1 = {1, "Aditya", 85.5};
    Student s2 = {2, "kartik", 92.0};
    Student s3 = {3, "Piyush", 78.5};
    Student s4 = {4, "Pawan", 88.0};

    outFile.write((char*)&s1, sizeof(Student));
    outFile.write((char*)&s2, sizeof(Student));
    outFile.write((char*)&s3, sizeof(Student));
    outFile.write((char*)&s4, sizeof(Student));

    outFile.close();
    cout << "Records written successfully!" << endl;
}

void retrieveRecord(int rollNo) {
    ifstream inFile("students.dat", ios::binary);
    if (!inFile) {
        cout << "Error opening file!" << endl;
        return;
    }

    Student s;
    bool found = false;

    while (inFile.read((char*)&s, sizeof(Student))) {
        if (s.rollNo == rollNo) {
            cout << "\n=== Record Found ===" << endl;
            cout << "Roll Number: " << s.rollNo << endl;
            cout << "Name: " << s.name << endl;
            cout << "Marks: " << s.marks << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Record with Roll Number " << rollNo << " not found!" << endl;
    }

    inFile.close();
}

int main() {
    writeRecords();

    int rollNo;
    cout << "\nEnter Roll Number to retrieve: ";
    cin >> rollNo;

    retrieveRecord(rollNo);

    return 0;
}
