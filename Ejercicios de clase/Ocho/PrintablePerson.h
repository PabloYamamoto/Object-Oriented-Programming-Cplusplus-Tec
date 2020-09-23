#include <iostream>
using namespace std; 
#include "Persona.h"
#include "Printable.h"

#pragma once
class PrintablePerson : public Person, public Printable {


    public: 
        PrintablePerson() = default; 
        PrintablePerson(string name, Person* parent); 
        void print(){
            cout << "Soy una persona y me llamo: " << getName() << endl; 
        }

        
}; 

PrintablePerson::PrintablePerson(string name, Person* parent) : Person(name, parent){}


