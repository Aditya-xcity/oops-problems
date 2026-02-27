#include <iostream>
using namespace std;
class A
{
public:
    int func(int val) const
    {
        return val * 2;
    }
};
class B
{
public:
    int func(int val) const
    {
        return val * 3;
    }
};
class C
{
public:
    int func(int val) const
    {
        return val * 5;
    }
};
class D
{
private:
    int val;
    A a_obj;
    B b_obj;
    C c_obj;

public:
    D(int initial_val) : val(initial_val) {}
    int get_val() const
    {
        return val;
    }
    void update_val(int new_val)
    {
        int temp_val = new_val, count_A = 0, count_B = 0, count_C = 0;
        while (temp_val % 2 == 0)
        {
            temp_val /= 2;
            count_A++;
        }
        while (temp_val % 3 == 0)
        {
            temp_val /= 3;
            count_B++;
        }
        while (temp_val % 5 == 0)
        {
            temp_val /= 5;
            count_C++;
        }
        this->val = 1;
        for (int i = 0; i < count_A; ++i)
        {
            this->val = a_obj.func(this->val);
        }
        for (int i = 0; i < count_B; ++i)
        {
            this->val = b_obj.func(this->val);
        }
        for (int i = 0; i < count_C; ++i)
        {
            this->val = c_obj.func(this->val);
        }
        cout << "A's func called " << count_A << " times\n"
             << "B's func called " << count_B << " times\n"
             << "C's func called " << count_C << " times\n";
    }
};
int main()
{
    int new_val = 30;
    D d_obj(1);
    cout << "New_val = 30 \n";
    d_obj.update_val(new_val);
    cout << "Final D's value: " << d_obj.get_val() << "\n";

    return 0;
}