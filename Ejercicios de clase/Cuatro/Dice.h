#include <iostream>
using namespace std; 

#pragma once
class Dice{
    private: 
        int side; 
        int score; 

    public: 
        Dice(); 
        ~Dice(); 

        int getSide(); 
        int getScore(); 

        void setSide(int side);
        void setScore(int score); 

        void Throw(); 
        void print(); 

}; 