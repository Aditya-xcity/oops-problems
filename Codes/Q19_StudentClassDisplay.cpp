#include <iostream>
using namespace std;
class student
{
    int age;
    string name;
    int enrollno;
    int marks;

public:
    student(int a, string b, int c, int d)
    {
        age = a;
        name = b;
        enrollno = c;
        marks = d;
    }
    void display()
    {
        cout << "\nStudent Class" << endl;
        cout << "Age         : " << age << " yrs" << endl;
        cout << "Name        : " << name << endl;
        cout << "Enroll No   : " << enrollno << endl;
        cout << "Total Marks : " << marks << endl;
    }
};
class faculty
{
    int facultycode;
    string facultyname;
    int age;
    int salary;
    int experience;

public:
    faculty(int a, string b, int c, int d, int e)
    {
        facultycode = a;
        facultyname = b;
        age = c;
        salary = d;
        experience = e;
    }
    void display()
    {
        cout << "Faculty Class\n";
        cout << "Faculty Code : " << facultycode << endl;
        cout << "Faculty Name : " << facultyname << endl;
                cout << "Age         : " << age << " yrs" << endl;
                cout << "Salary      : Rs." << salary << endl;
                cout << "Experience  : " << experience << " yrs" << endl;
    }
};
class person : public student, public faculty
{
public:
    person(int a, string b, int c, int d, int e, string f, int g, int h, int i) : student(a, b, c, d), faculty(e, f, g, h, i) {}
    void display()
    {
        faculty::display();
        student::display();
    }
};
int main()
{
    person p1(20, "ADITYA", 45, 00, 1234, "sample", 33, 50000, 30);
    p1.display();
    return 0;
}