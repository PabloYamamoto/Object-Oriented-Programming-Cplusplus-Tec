#include "Board.h"
#include <iostream>
using namespace std; 

int main(){

    cout << endl; 
    cout << "================================================================" << endl; 
    cout << "This board is the default one" << endl; 
    cout << "================================================================" << endl; 
    Board *Game = new Board(5, 5); 
    cout << "================================================================" << endl; 
    cout << "Now you will create your own board" << endl; 
    cout << "================================================================" << endl; 
    Game->setBoard(); 
    delete Game; 
}

// g++ -std=c++17 main.cpp -std=c++17 Board.cpp -o main