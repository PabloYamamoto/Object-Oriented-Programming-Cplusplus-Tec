#include <string>
#include <iostream>
class Board; // forward declaration
using namespace std; 
#pragma once

class User{

    private: 
        string name; 
    
    public: 
        User(); 
        User(string message);  //Constructor
        ~User(); 

        void writeOnBoard(Board*, string name); 

        void setName(string name); 
        

        string getName(); 
}; 

