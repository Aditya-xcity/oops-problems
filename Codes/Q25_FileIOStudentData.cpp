/*
Q. Write a C++ program to write student data and show contents on console.

Name   - ADITYA BHARDWAJ
Section- D2
Roll No- 08
Course – B TECH
Branch – CSE
*/

#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
using namespace std;

struct Student {
    int rollNo;
    char name[50];
    char course[30];
    float marks;
};

void writeStudentData() {
    ofstream outFile("student_data.txt");
    if (!outFile) {
        cout << "Error creating file!" << endl;
        return;
    }

    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student s;
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for student " << (i + 1) << ":" << endl;
        cout << "Roll Number: ";
        cin >> s.rollNo;
        cout << "Name: ";
        cin.ignore();
        cin.getline(s.name, 50);
        cout << "Course: ";
        cin.getline(s.course, 30);
        cout << "Marks: ";
        cin >> s.marks;

        outFile << s.rollNo << " " << s.name << " " << s.course << " " << s.marks << endl;
    }

    outFile.close();
    cout << "\nStudent data written to file successfully!" << endl;
}

void showContents() {
    ifstream inFile("student_data.txt");
    if (!inFile) {
        cout << "Error opening file!" << endl;
        return;
    }

    cout << "\nStudent Data" << endl;
    cout << "Roll No\tName\t\tCourse\t\tMarks" << endl;

    string line;
    while (getline(inFile, line)) {
        if (!line.empty()) {
            cout << line << endl;
        }
    }

    inFile.close();
}

int main() {
    writeStudentData();
    showContents();

    return 0;
}
