#include <iostream>
using namespace std; 

class A{
    public : 
        int a = 10; 

};

class B: public A{

}; 

 class C : public B{
     void print(){
         cout << a << endl; 
     }
 }; 


 int main(){
    

 }