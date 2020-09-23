#include <iostream>
using namespace std; 

class Base{
    public:
        virtual void foo(){
            cout<< "Base" << endl; 
        }
}; 

class Derived : public Base{
    public: 
        void foo(){cout << "derived" << endl; }
}; 

int main(){
    Derived derived; 
    derived.foo(); 
}