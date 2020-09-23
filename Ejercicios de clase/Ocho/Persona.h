#include <iostream>
#include <string>
using namespace std; 

#pragma once
class Person{


    protected:
        string name; 
        int edad; 
        Person* parent; 

    public: 
        Person(); 
        Person(string name, Person *parent); 
        Person* getParent(); 
        string getName(); 

        int getNumberofAntecesors(); 


}; 