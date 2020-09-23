#include <iostream>
#include "Videogame.h"
using namespace std; 

int main(){
    Videogame *COD = new Videogame; 
    COD->setName("Call Of Duty"); 
    COD->setClassification("V"); 
    COD->setWeight(120.50); 

    COD->PrintCharacteristics(); 

    delete COD; 
}