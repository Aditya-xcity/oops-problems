#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    int age;

    Person(string n, int a) : name(n), age(a) {}

    void displayPerson()
    {
        cout << "Name : " << name << endl
             << "Age  : " << age << endl;
    }
};

class student : virtual public Person
{
public:
    int roll;

    student(string n, int a, int r) : Person(n, a), roll(r) {}

    void displayStudent()
    {
        cout << "Roll No. : " << roll << endl;
    }
};

class employee : virtual public Person
{
public:
    int empID;
    double salary;

    employee(string n, int a, int ID, double s) : Person(n, a), empID(ID), salary(s) {}

    void displayEmployee()
    {
        cout << "Employee ID : " << empID << endl
             << "Salary      : " << salary << endl;
    }
};

class TeachingAssistant : public student, public employee
{
public:
    string subject;

    TeachingAssistant(string n, int a, int r, int ID, double s, string sub)
        : Person(n, a), student(n, a, r), employee(n, a, ID, s), subject(sub) {}

    void displayTA()
    {
        displayPerson();
        displayStudent();
        displayEmployee();
        cout << "Subject     : " << subject << endl;
    }
};

int main()
{
    string name;
    int age, roll, empID;
    double salary;
    string subject;

    cout << "\nENTER DETAILS\n";
    cout << "Name        : ";
    getline(cin, name);

    cout << "Age         : ";
    cin >> age;

    cout << "Roll No.    : ";
    cin >> roll;

    cout << "Employee ID : ";
    cin >> empID;

    cout << "Salary      : ";
    cin >> salary;

    cin.ignore();
    cout << "Subject     : ";
    getline(cin, subject);

    cout << "\nDemonstration of Diamond Problem\n";
    TeachingAssistant ta(name, age, roll, empID, salary, subject);
    ta.displayTA();

    return 0;
}
