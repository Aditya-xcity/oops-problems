/*
Q. Write a program in C++ to use open() and eof() function.

Name   - ADITYA BHARDWAJ
Section- D2
Roll No- 08
Course – B TECH
Branch – CSE
*/

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream outFile;
    outFile.open("data.txt");
    
    if (!outFile) {
        cout << "Error opening file for writing!" << endl;
        return 1;
    }

    outFile << "Line 1: Hello World" << endl;
    outFile << "Line 2: This is a test file" << endl;
    outFile << "Line 3: Using open() and eof() functions" << endl;
    outFile << "Line 4: End of file demonstration" << endl;

    outFile.close();
    cout << "Data written to file successfully!" << endl;

    ifstream inFile;
    inFile.open("data.txt");
    
    if (!inFile) {
        cout << "Error opening file for reading!" << endl;
        return 1;
    }

    cout << "\n=== Reading file contents ===" << endl;
    string line;
    int lineCount = 0;

    while (!inFile.eof()) {
        getline(inFile, line);
        if (!line.empty()) {
            lineCount++;
            cout << "Line " << lineCount << ": " << line << endl;
        }
    }

    cout << "\nTotal lines read: " << lineCount << endl;
    cout << "End of file reached!" << endl;

    inFile.close();

    return 0;
}
