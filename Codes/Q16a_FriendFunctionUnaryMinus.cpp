/*Q16. Using the concept of operator overloading. Implement a program to 
overload the following: With the help of friend function 
16. a. Unary – */
#include <iostream> 
using namespace std; 
class Test 
{ 
private: 
public: 
int data1; 
int data2; 
Test(int a = 0, int b =0){ 
data1=a; 
data2=b; 
} 
friend Test operator-(Test &t1); 
void show(){ 
cout << "Data 1 = " << data1 << "\nData 2 = " << data2 << endl;  
} 
}; 
Test operator-(Test &t1){ 
Test result; 
result.data1 = -t1.data1; 
result.data2 = -t1.data2; 
return result; 
} 
int main() 
{ 
Test t1(2,4); 
cout << "Initial values of object t1 are: "<< endl; 
t1.show(); 
Test t2 = -t1; 
cout << "The values of object t2 after (t2 = -t1) are: "<< endl; 
t2.show(); 
return 0; 
}
