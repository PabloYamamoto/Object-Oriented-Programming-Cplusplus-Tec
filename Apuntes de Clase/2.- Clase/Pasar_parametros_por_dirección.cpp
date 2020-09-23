#include <iostream>
using namespace std; 

void modify(int *value){
    *value = 1000; 
}

int main(){
    int value = 9; 
    cout << "================================================" << endl; 
    cout << "Value before calling the function is: " << value << endl; 
    cout << "The addres of value is : " << &value << endl; 
    cout << "================================================" << endl; 

    modify(&value); 

    cout << "================================================" << endl; 
    cout << "Value after calling the function is: " << value << endl; 
    cout << "The addres of value is : " << &value << endl; 
    cout << "================================================" << endl; 


}