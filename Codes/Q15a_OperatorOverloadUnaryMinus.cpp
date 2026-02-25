#include <iostream> 
using namespace std; 
 
class Test 
{ 
 private: 
  int data1; 
  int data2; 
 public: 
  Test(int a = 0, int b =0){ 
   data1=a; 
   data2=b; 
  } 
  Test operator-(){ 
   Test result; 
   result.data1 = -data1; 
   result.data2 = -data2; 
   return result; 
  } 
  void show(){ 
   cout << "Data 1 = " << data1 << "\nData 2 = " << data2 << endl;  
  } 
}; 
 
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