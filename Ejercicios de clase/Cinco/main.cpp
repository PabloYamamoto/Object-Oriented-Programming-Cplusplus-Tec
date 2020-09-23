#include "BB.h"

int main(){

    BB *Basket = new BB(); 
    string *name = new string("Warrios"); 
    Basket->setName1(name); 
   
    delete Basket;
   
   
}


// g++ -std=c++17 main.cpp -std=c++17 BB.cpp -o main