#include "Dice.h"
#include <iostream>
using namespace std; 

int main(){
    Dice *D = new Dice; 

    D->Throw(); 
    D->print(); 
    D->Throw(); 
    D->print(); 


    delete D; 
}

// g++ -std=c++17 main.cpp -std=c++17 Dice.cpp -o maiin
