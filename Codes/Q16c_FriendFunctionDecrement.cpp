// 16. c. Unary – – predecrement, postdecrement
#include <iostream>
using namespace std;
class Test
{
private:
    int data1;
    int data2;

public:
    Test(int a = 0, int b = 0)
    {
        data1 = a;
        data2 = b;
    }
    friend Test &operator--(Test &t1);
    friend Test operator--(Test &t1, int);
    void show() const
    {
        cout << "Data 1 = " << data1 << "\nData 2 = " << data2 << endl;
    }
};
Test &operator--(Test &t1)
{
    t1.data1--;
    t1.data2--;
    return t1;
}
Test operator--(Test &t1, int)
{
    Test temp = t1;
    t1.data1--;
    t1.data2--;
    return temp;
}
int main()
{
     
Test t1(2, 4); 

    cout << "Initial values of object t1 are: " << endl;
    t1.show();
    --t1;
    cout << "The values of object t1 after (--t1) are: " << endl;
    t1.show();
    t1--;
    cout << "The values of object t1 after (t1--) are: " << endl;
    t1.show();

    return 0;
}