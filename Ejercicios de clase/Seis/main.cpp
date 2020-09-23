#include "Tax.h"

int main(){

    Tax *P = new Tax(400.0, 0.06); 

    P->Calculate(); 
    
    delete P; 

}


// g++ -std=c++17 main.cpp -std=c++17 Tax.cpp -o main