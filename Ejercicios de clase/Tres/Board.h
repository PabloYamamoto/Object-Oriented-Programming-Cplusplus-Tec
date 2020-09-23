#include <iostream>
#include <vector>
#include <string>
using namespace std; 

#pragma once
class Board{

    private:
        int rows; 
        int cols; 
        string color; 


    public: 
        Board(); 
        Board(int rows, int cols); 
        ~Board(); 
        int getRows(); 
        string getColor(); 
        int getCols(); 

        void setRows(int rows); 
        void setCols(int rows); 
        void setColor(string color); 

        void setBoard(); 
}; 