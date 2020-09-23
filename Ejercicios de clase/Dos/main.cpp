#include <iostream>
using namespace std; 
#include "Player.h"

int main(){

    Player *p1 = new Player("Raul", 99.80, "Xbox");
    Player *p2 = new Player("Pablo", 99.81, "PlayStation"); 
    Player *p3 = new Player("Daniela", 88.91, "Switch"); 



    p1->Battle(); 
    p2->TurnoffConsole(); 
    p3->sendMessage(); 
    
    p2->PlayerInfo(); 

    delete p1; 
    delete p2; 
    delete p3; 
     

}

//      g++ -std=c++17 main.cpp -std=c++17 Player.cpp -o main