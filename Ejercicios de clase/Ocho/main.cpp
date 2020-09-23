#include "Persona.h"

int main(){
    Person Eva; 
    Person Perla("Perla", &Eva); 
    Person Susana("Susana", &Perla); 
    Person Leticia("Leticia", &Susana); 
   
    Leticia.getNumberofAntecesors(); 
    Susana.getNumberofAntecesors(); 
    Perla.getNumberofAntecesors(); 
    Eva.getNumberofAntecesors(); 

}

// g++ -std=c++17 main.cpp -std=c++17 Persona.cpp -o main