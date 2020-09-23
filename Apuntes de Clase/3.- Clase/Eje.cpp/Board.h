#include <iostream>
#include <string>
class User; 
using namespace std; 


#pragma once
class Board{
    private: 
        User* owner; 
        string allMessages; 

    public: 
        Board()=default; 
        Board(User*); 
        void writeMessage(User*, string message);
        void printBoard();  
        void clearMessages(); 
        int howManyMessages(User*);


}; 