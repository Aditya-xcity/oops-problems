#include <iostream>
using namespace std;

class A {
private:
    int data;

public:
    
    A(int d = 0) : data(d) {}

    
    void display() const {
        cout << data;
    }

    
    friend A operator-(const A& obj);          
    friend A operator++(A& obj);               
    friend A operator++(A& obj, int);          
    friend A operator--(A& obj);               
    friend A operator--(A& obj, int);          
};


A operator-(const A& obj) {
    return A(-obj.data);
}


A operator++(A& obj) {
    ++obj.data;
    return obj;
}


A operator++(A& obj, int) {
    A temp = obj;
    obj.data++;
    return temp;
}


A operator--(A& obj) {
    --obj.data;
    return obj;
}


A operator--(A& obj, int) {
    A temp = obj;
    obj.data--;
    return temp;
}

int main() {
    A obj(5);

    cout << "Original object value: ";
    obj.display();
    cout << endl;

    cout << "Unary minus (-obj): ";
    (-obj).display();
    cout << endl;

    cout << "Pre-increment (++obj): ";
    (++obj).display();
    cout << "  Object value after pre-increment: ";
    obj.display();
    cout << endl;

    cout << "Post-increment (obj++): ";
    (obj++).display();
    cout << "  Object value after post-increment: ";
    obj.display();
    cout << endl;

    cout << "Pre-decrement (--obj): ";
    (--obj).display();
    cout << "  Object value after pre-decrement: ";
    obj.display();
    cout << endl;

    cout << "Post-decrement (obj--): ";
    (obj--).display();
    cout << "  Object value after post-decrement: ";
    obj.display();
    cout << endl;

    return 0;
}
