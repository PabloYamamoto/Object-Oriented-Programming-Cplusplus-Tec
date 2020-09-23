#include "Board.h"
#include "User.h"

Board::Board(User* owner) : owner(this->owner){
    //this->owner = owner
}



void Board::writeMessage(User* user, string message){
    allMessages += user->getName() + ": " + message + '\n'; 
}

void Board::printBoard(){
    cout << owner->getName() << " 's Board" << endl; 
    cout << "===========================================" << endl; 
    cout << allMessages; 
    cout << "===========================================" << endl; 
}

void Board::clearMessages(){

}

int Board::howManyMessages(User* ){

}

