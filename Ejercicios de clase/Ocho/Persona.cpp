#include "Persona.h"

Person::Person(){
    parent = 0; 
    name = "Eva"; 
}

Person* Person::getParent(){
    return parent; 
}

string Person::getName(){
    return name; 
}

Person::Person(string name, Person* parent){
    this->name = name; 
    this->parent = parent; 
}


int Person::getNumberofAntecesors(){

    Person *pointer2Move = this; 
    int cont = 0; 
    while(pointer2Move->getParent() != 0){
        cont++; 
        pointer2Move = pointer2Move->getParent(); 
    }

    cout << getName() << " has " << cont << " Ancestors " << endl; 
    return cont; 
}

