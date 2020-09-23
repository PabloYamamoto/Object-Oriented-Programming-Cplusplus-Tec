#include "SnL.h"
using namespace std;
#include <iostream>

int main(){
    SnL *game = new SnL; 
    game->start(); 
    
    delete game;  
}

// g++ -std=c++17 main.cpp -std=c++17 SnL.cpp -o main