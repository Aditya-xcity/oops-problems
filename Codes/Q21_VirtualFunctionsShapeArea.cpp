#include <iostream>
using namespace std;

class shape
{
protected:
    double x, y;

public:
    void get_data()
    {
        cout << "Enter two dimensions: ";
        cin >> x >> y;
    }

    virtual void display_area()
    {
        cout << "Area from base class: " << x * y << endl;
    }
};

class rectangle : public shape
{
public:
    void display_area() override
    {
        cout << "Area of Rectangle: " << x * y << endl;
    }
};

class triangle : public shape
{
public:
    void display_area() override
    {
        cout << "Area of Triangle: " << 0.5 * x * y << endl;
    }
};

int main()
{
    int choice;
    cout << "Select the shape to calculate area:\n";
    cout << "1. Rectangle\n2. Triangle\n";
    cin >> choice;

    shape *s;

    if (choice == 1)
    {
        s = new rectangle();
    }
    else if (choice == 2)
    {
        s = new triangle();
    }
    else
    {
        cout << "Invalid choice!" << endl;
        return 0;
    }

    s->get_data();
    s->display_area();

    delete s;
    return 0;
}
