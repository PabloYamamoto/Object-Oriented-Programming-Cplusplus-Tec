#include "Videogame.h"
#include <iostream>

Videogame::Videogame(){

}

Videogame::Videogame(string Console, string Classification, double Weight){
    Console = "Xbox"; 
    Classification = "PG-13"; 
    Weight = 120.70; 
}

Videogame::~Videogame(){
    cout << "Videogame destructor called" << endl; 
}

string Videogame::getName(){
    return Name; 
}
string Videogame::getConsole(){
    return Console_designed_for; 
}

string Videogame::getClasification(){
    return Classification; 
}

double Videogame::getWeight(){
    return Weight; 
}

vector<string> Videogame::getLevels(){
    return Levels; 
}

vector<string> Videogame::getWeapons(){
    return Weapons; 
}

double Videogame::getPoints(){
    return Points; 
}


void Videogame::setName(string Name){
    this->Name = Name; 
}


void Videogame::setConsole(string Console_designed_for){
    this->Console_designed_for = Console_designed_for; 
}

void Videogame::setClassification(string Classification){
    this->Classification = Classification; 
}

void Videogame::setWeight(double Weight){
    this->Weight = Weight; 
}

void Videogame::setLevels(vector<string> Levels){
    this->Levels = Levels; 
}

void Videogame::setWeapons(vector<string> Weapons){
    this->Weapons = Weapons; 
}

void Videogame::setPoints(double Points){
    this->Points = Points; 
}


void Videogame::PrintCharacteristics(){
    cout << "================================================" << endl; 
    cout << "Videogame: " << getName() << endl; 
    cout << "Classification: " << getClasification() << endl; 
    cout << "It will take: " << getWeight() << " GBs to install it" << endl; 
    cout << "================================================" << endl; 

}