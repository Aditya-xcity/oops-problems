/*
Q. Write a program using templates to create a generic list class and perform 
   insertion/deletion.

Name   - ADITYA BHARDWAJ
Section- D2
Roll No- 08
Course – B TECH
Branch – CSE
*/

#include <iostream>
using namespace std;

template <class T>
class List {
private:
    T* arr;
    int capacity;
    int size;

public:
    List(int cap = 100) {
        capacity = cap;
        size = 0;
        arr = new T[capacity];
    }

    ~List() {
        delete[] arr;
    }

    void insert(T element) {
        if (size < capacity) {
            arr[size] = element;
            size++;
            cout << "Element " << element << " inserted successfully." << endl;
        }
        else {
            cout << "List is full! Cannot insert." << endl;
        }
    }

    void insertAt(int pos, T element) {
        if (pos < 0 || pos > size) {
            cout << "Invalid position!" << endl;
            return;
        }
        if (size >= capacity) {
            cout << "List is full! Cannot insert." << endl;
            return;
        }
        
        for (int i = size; i > pos; i--) {
            arr[i] = arr[i - 1];
        }
        arr[pos] = element;
        size++;
        cout << "Element " << element << " inserted at position " << pos << "." << endl;
    }

    void deleteElement(T element) {
        int found = -1;
        for (int i = 0; i < size; i++) {
            if (arr[i] == element) {
                found = i;
                break;
            }
        }
        
        if (found == -1) {
            cout << "Element " << element << " not found!" << endl;
            return;
        }
        
        for (int i = found; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size--;
        cout << "Element " << element << " deleted successfully." << endl;
    }

    void deleteAt(int pos) {
        if (pos < 0 || pos >= size) {
            cout << "Invalid position!" << endl;
            return;
        }
        
        T deleted = arr[pos];
        for (int i = pos; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size--;
        cout << "Element at position " << pos << " (" << deleted << ") deleted." << endl;
    }

    void display() {
        if (size == 0) {
            cout << "List is empty." << endl;
            return;
        }
        cout << "List elements: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    int getSize() {
        return size;
    }
};

int main() {
    cout << "=== Testing with Integer List ===" << endl;
    List<int> intList;
    
    intList.insert(10);
    intList.insert(20);
    intList.insert(30);
    intList.insert(40);
    intList.display();
    
    intList.insertAt(2, 25);
    intList.display();
    
    intList.deleteElement(20);
    intList.display();
    
    intList.deleteAt(1);
    intList.display();

    cout << "\n=== Testing with Float List ===" << endl;
    List<float> floatList;
    
    floatList.insert(10.5);
    floatList.insert(20.7);
    floatList.insert(30.9);
    floatList.display();
    
    floatList.deleteElement(20.7);
    floatList.display();

    cout << "\n=== Testing with Character List ===" << endl;
    List<char> charList;
    
    charList.insert('A');
    charList.insert('B');
    charList.insert('C');
    charList.insert('D');
    charList.display();
    
    charList.deleteElement('B');
    charList.display();
    
    charList.insertAt(1, 'X');
    charList.display();

    return 0;
}
