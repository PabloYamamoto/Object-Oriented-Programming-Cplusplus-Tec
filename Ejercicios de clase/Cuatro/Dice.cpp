#include "Dice.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctime>


Dice::Dice(){}

Dice::~Dice(){}

int Dice::getSide(){
    return side; 
}

int Dice::getScore(){
    return score; 
}

void Dice::setSide(int side){
    this->side = side; 
}

void Dice::setScore(int score){
    this->score= score; 
}

void Dice::Throw(){
   int throws; 
   cout << "How many times you want to throw ? ", cin >> throws; 
   srand((unsigned) time(0));
   cout << endl; 
   cout << "============================================" << endl; 
   for (int i = 1; i <= throws; i++) {
        score = (1 + (rand() % 6)); 
        cout << "Throw #" << i << "\t" << score << endl; 
        setScore(score); 
    }
    cout << "============================================" << endl; 


}

void Dice::print(){
    cout << endl; 
    cout << "Printing the last throw: " << endl; 
    cout << "Score is: " << getScore() << endl; 
    cout << endl; 
}