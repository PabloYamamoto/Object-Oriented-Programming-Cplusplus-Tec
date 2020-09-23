#include "Player.h"
#include <iostream>
#include <cstdlib>

Player::Player(){}

Player::Player(string Gamertag, double Score, string Console){
    this->Gamertag = Gamertag; 
    this->Score = Score; 
    this->Console = Console; 
}

Player::~Player(){}



string Player::getGamertag(){
    return Gamertag; 
}

int Player::getAttack(){
    const int max = 20; 
    const int min = 5; 
    return rand()%max + min; 
}

int Player::getHeal(){
    return (rand()%10) + 1; 
}

string Player::getConsole(){
    return Console; 
}

double Player::getScore(){
    return Score; 
}

double Player::getTime(){
    return Timeplayed; 
}



void Player::setGamertag(string Gamertag){
    this->Gamertag = Gamertag; 
}

void Player::setConsole(string Console){
    this->Console = Console; 
}

void Player::setScore(double Score){
    this->Score = Score; 
}

void Player::setTime(double Timeplayed){
    this->Timeplayed = Timeplayed; 
}

void Player::setAttack(int Attack){
    this->Attack = Attack; 
}

void Player::setHeal(int Heal){
    this->Heal = Heal; 
}


void Player::Battle(){
    string name1, name2; 
    cout << "==============================" << endl; 
    cout << "Enter the Gamertags of the 2 Players: "; 
    cin >> name1 >> name2;  
    setGamertag(name1); 
    setGamertag(name2); 
    cout << "============================" << endl; 

    int health1 = 100, health2 = 100; 
     
    while(true){
        int attack = getAttack(), attack2 = getAttack(); 
        cout << endl; 
        cout << name1 << " Attack " << endl; 
        cout << "Player 1 dealt: " << attack << " damage to Player 2" << endl; 
        health2  = health2 - attack;  
        
        cout << name2 << " Has now: " << health2 << endl; 
        cout << "====================================" << endl; 
        cout << endl; 
        cout << name2 << " Attack " << endl; 
        cout << "Player 2 dealt: " << attack2 << " damage to Player 1" << endl; 
        health1 = health1 - attack2; 
        
        cout << name1 << " Has now: " << health1 << endl; 
        cout << "====================================" << endl; 

        if(health1 == 0 || health1 < 0){
            cout << "Player 2: " << name2 << " Has won the battle!!" << endl; 
            break; 
        }
    
        else if(health2 == 0 || health2 < 0){
            cout << "Player 1: " << name1 << " Has won the battle!!" << endl; 
            break; 
        }

    }

    
}

void Player::sendMessage(){
    string text; 
    cout << "==================================" << endl; 
    cout << "Enter the Gamertag that will receive the message: ", cin >> Gamertag;  
    cout << "Enter the Message (Max 250 Chars): " << endl; 
    cin >> text; 
    cout << endl; 
    cout << Gamertag << " Has received the message " << endl; 
    cout << "============================================== " << endl; 
    cout << endl; 
    
}

void Player::TurnoffConsole(){
    cout << "====================================" << endl; 
    cout << "Turning off the " << getConsole() << endl; 
    cout << "Thanks for playing with us, see u soon!" << endl; 
    cout << "====================================" << endl; 

}

void Player::PlayerInfo(){
    cout << "Gamertag: " << getGamertag() << " ===============" << endl; 
    cout << "Socre: " << getScore() << " ==================" << endl; 
    cout << "Time Played in total: " << getTime() << " ==============" << endl; 
    cout << "Console: " << getConsole() << " ================" << endl; 
}