#include <iostream>
using namespace std; 

int add(int &num1, int &num2){   //Los AMPERSAND EN LA FIRMA INDICA QUE ES PASAR VALORES POR REFERENCIA
    num1 = 30; 
    num2 = 60; 
    return num1 + num2; 
}


int main(){
    int num1, num2; 
    num1 = 10; num2 = 20; 
    cout << "===================================" << endl; 
    cout << "Before calling the add function" << endl; 
    cout << "num1 now is: " << num1 << " - num2 now is: " << num2 << endl; 
    cout << "===================================" << endl; 
    
    int suma = add(num1, num2); 
    
   
    cout << "===================================" << endl; 
    cout << "After calling the add function" << endl; 
    cout << "num1 now is: " << num1 << " - num2 now is: " << num2 << endl; 
    cout << "The add function returns a value of: " << suma << endl; 
    cout << "===================================" << endl; 


}

