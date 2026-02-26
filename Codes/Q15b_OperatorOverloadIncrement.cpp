#include <iostream> 
using namespace std; 
class Test{ 
 private: 
  int data1; 
  int data2; 
 public: 
  Test(int a = 0, int b =0){ 
   data1=a; 
   data2=b; 
  } 
  Test operator++(){ 
   data1 = data1 +1; 
   data2 = data2 +1; 
   return *this; 
  } 
  Test operator++(int){ 
   data1 = data1 +1; 
   data2 = data2 +1; 
   return *this; 
  } 
  void show(){ 
   cout << "Data 1 = " << data1 << "\nData 2 = " << data2 << endl;  
  } 
}; 
int main(){ 
 Test t1(2,4); 
 cout << "Initial values of object t1 are: "<< endl; 
 t1.show(); 
 ++t1; 
 cout << "The values of object t1 after (++t1) are: "<< endl; 
 t1.show(); 
 t1++; 
 cout << "The values of object t1 after (t1++) are: "<< endl; 
 t1.show(); 

 return 0; 
}