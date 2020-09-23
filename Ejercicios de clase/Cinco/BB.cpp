#include "BB.h"

BB::BB(){
    NameTeam1 = new string; 
    NameTeam2 = new string; 
    Score1 = new int; 
    Score2 = new int; 
    Timeleft = 90; 
}



BB::~BB(){
    cout << endl; 
    cout << "Deconstructor called" << endl; 
    cout << endl; 
    delete NameTeam1; 
    delete NameTeam2; 
    delete Score1; 
    delete Score2; 
}

string BB::getName1(){
    return *NameTeam1; 
      
}

string BB::getName2(){
    
    return *NameTeam2; 
      
}

int BB::getScore1(){
   
    return *Score1; 
     
}

int BB::getScore2(){
   
    return *Score2; 
     
}

int BB::getTimeleft(){
    return Timeleft; 
}

void BB::setName1(string *NameTeam1){
     this->NameTeam1 = NameTeam1; 
}

void BB::setName2(string *NameTeam2){
     this->NameTeam2 = NameTeam2; 
}

void BB::setScore1(int *Score1){
    this->Score1 = Score1; 
}

void BB::setScore2(int *Score2){
    this->Score2 = Score2; 
}

void BB::setTimeleft(int Timeleft){
    this->Timeleft = Timeleft; 
}

