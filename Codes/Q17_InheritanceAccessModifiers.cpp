/*Q17. Create a Base class that consists of private, protected and public data
members and member functions. Try using different access modifiers for
inheriting Base class to the Derived class and create a table that summarizes
the above three modes. */

#include <iostream>
using namespace std;
class base
{
private:
    int priVal = 5;

protected:
    int protVal = 10;

public:
    int val = 20;
    void display()
    {
        cout << "In Parent class\nprivate variable[priVal] : " << priVal << endl;
        cout << "protected variable[proVal] : " << protVal << endl;
        cout << "public variable[Val] : " << val << endl;
    }
};
class derived_1 : public base
{
public:
    void display()
    {
        cout << "\nHere in derived class with Public mode inheritance private Variable is not accessible " << endl;
        cout
            << "protected variable[proVal] : " << protVal << endl;
        cout << "public variable[Val] : " << val << endl;
    }
};
class derived_2 : protected base
{
public:
    void display()
    {
        cout << "\nHere in derived class with Protected mode inheritance private Variable is not accessible " << endl;
        cout
            << "protected variable[proVal] : " << protVal << endl;
        cout << "public variable[Val] becomes protected : " << val << endl;
    }
};
class derived_3 : private base
{
public:
    void display()
    {
        cout << "\nHere in derived class with Private mode inheritance private Variable is not accessible " << endl;

        cout << "protected variable[proVal] becomes private: " << protVal << endl;
        cout << "public variable[Val] becomes private : " << val << endl;
    }
};
int main()
{
    base ob;
    ob.display();
    derived_1 ob2;
    ob2.display();
    derived_2 ob3;
    ob3.display();
    derived_3 ob4;
    ob4.display();

    return 0;
}