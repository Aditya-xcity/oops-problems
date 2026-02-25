/*Create a class Complex having two int type variable named real & img denoting real and
imaginary part respectively of a complex number. Overload +, - , == operator to add, to
subtract and to compare two complex numbers being denoted by the two complex type
objects. */

#include <iostream>
using namespace std;
class Complex
{
private:
    int real;
    int img;

public:
    Complex(int x = 0, int y = 0)
    {
        real = x;
        img = y;
    }
    void show()
    {
        if (img >= 0)
            cout << "The complex number is: " << real << "+" << img << "i" << endl;
        else
            cout << "The complex number is: " << real << img << "i" << endl;
    }
    Complex operator+(Complex &c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.img = img + c.img;
        return temp;
    }
    Complex operator-(Complex &c)
    {
        Complex temp;
        temp.real = real - c.real;
        temp.img = img - c.img;
        return temp;
    }
    int operator==(Complex &c)
    {
        return (real == c.real) && (img == c.img);
    }
};
int main()
{
    int real, img;
    cout << "Enter a complex number (real imaginary): ";

    cin >> real >> img;
    Complex c1(real, img);
    cout << "Enter another complex number (real imaginary): ";
    cin >> real >> img;
    Complex c2(real, img);
    Complex c3;
    c3 = c1 + c2;
    cout << "c3 = c1 + c2: ";
    c3.show();
    c3 = c1 - c2;
    cout << "c3 = c1 - c2: ";
    c3.show();
    cout << "c1 == c2: ";
    if (c1 == c2)
    {
        cout << "C1 is equal to C2" << endl;
    }
    else
    {
        cout << "C1 is not equal to C2" << endl;
    }

    return 0;
}