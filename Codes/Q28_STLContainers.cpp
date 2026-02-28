/*
Q. Construct a C++ program to demonstrate different methods of List, Vector 
   and Map in STL (Standard Template Library).

Name   - ADITYA BHARDWAJ
Section- D2
Roll No- 08
Course – B TECH
Branch – CSE
*/

#include <iostream>
#include <list>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

void demonstrateList() {
    cout << "\nLIST DEMONSTRATION" << endl;
    
    list<int> myList;
    
    myList.push_back(10);
    myList.push_back(20);
    myList.push_back(30);
    myList.push_front(5);
    myList.insert(++myList.begin(), 15);
    
    cout << "After insertion: ";
    for (auto it = myList.begin(); it != myList.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    
    cout << "Size: " << myList.size() << endl;
    cout << "Empty? " << (myList.empty() ? "Yes" : "No") << endl;
    
    cout << "Front element: " << myList.front() << endl;
    cout << "Back element: " << myList.back() << endl;
    
    myList.pop_front();
    myList.pop_back();
    myList.remove(15);
    
    cout << "After deletion: ";
    for (int x : myList) {
        cout << x << " ";
    }
    cout << endl;
    
    myList.reverse();
    cout << "After reverse: ";
    for (int x : myList) {
        cout << x << " ";
    }
    cout << endl;
}

void demonstrateVector() {
    cout << "\nVECTOR DEMONSTRATION\n" << endl;
    
    vector<int> myVector;
    
    myVector.push_back(10);
    myVector.push_back(20);
    myVector.push_back(30);
    myVector.insert(myVector.begin() + 1, 15);
    myVector.insert(myVector.end(), 40);
    
    cout << "After insertion: ";
    for (int x : myVector) {
        cout << x << " ";
    }
    cout << endl;
    
    cout << "Size: " << myVector.size() << endl;
    cout << "Capacity: " << myVector.capacity() << endl;
    
    cout << "Element at index 2: " << myVector[2] << endl;
    cout << "Element at index 1 (using at): " << myVector.at(1) << endl;
    cout << "Front element: " << myVector.front() << endl;
    cout << "Back element: " << myVector.back() << endl;
    
    myVector.pop_back();
    myVector.erase(myVector.begin() + 1);
    
    cout << "After deletion: ";
    for (int x : myVector) {
        cout << x << " ";
    }
    cout << endl;
    
    myVector.clear();
    cout << "After clear, size: " << myVector.size() << endl;
}

void demonstrateMap() {
    cout << "\n=== MAP DEMONSTRATION ===" << endl;
    
    map<string, int> myMap;
    
    myMap["ADITYA"] = 25;
    myMap["PAWAN"] = 30;
    myMap["Aashish"] = 35;
    myMap.insert(make_pair("David", 28));
    myMap.insert({"Eve", 32});
    
    cout << "After insertion:" << endl;
    for (auto it = myMap.begin(); it != myMap.end(); ++it) {
        cout << it->first << " : " << it->second << endl;
    }
    
    cout << "\nSize: " << myMap.size() << endl;
    cout << "Empty? " << (myMap.empty() ? "Yes" : "No") << endl;
    
    cout << "\nAge of Bob: " << myMap["Bob"] << endl;
    cout << "Age of Charlie: " << myMap.at("Charlie") << endl;
    
    auto it = myMap.find("David");
    if (it != myMap.end()) {
        cout << "Found David: " << it->second << endl;
    }
    
    cout << "Does Alice exist? " << (myMap.count("Alice") ? "Yes" : "No") << endl;
    cout << "Does Frank exist? " << (myMap.count("Frank") ? "Yes" : "No") << endl;
    
    myMap.erase("Bob");
    it = myMap.find("Eve");
    if (it != myMap.end()) {
        myMap.erase(it);
    }
    
    cout << "\nAfter deletion:" << endl;
    for (const auto& pair : myMap) {
        cout << pair.first << " : " << pair.second << endl;
    }
    
    myMap.clear();
    cout << "\nAfter clear, size: " << myMap.size() << endl;
}

int main() {
    demonstrateList();
    demonstrateVector();
    demonstrateMap();
    
    return 0;
}
