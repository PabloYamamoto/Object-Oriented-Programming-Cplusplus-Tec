#include "User.h"
#include "Board.h"

User::User(){

}

User::User(string name){
    this-> name = name; 
}

User::~User(){
    cout << "Destructor of User called" << endl; 
}
void User::writeOnBoard(Board* board,string message){
    board->writeMessage(this, message); 
}

void User::setName(string name){
    this -> name = name; 
}

//  NO TIENE SENTIDO DEFINIR NAME COMO PRIVADO Y TENER UNA FUNCION PUBLICA PARA MODIFICARLO
//  ESTOS SOLO SE UTLIZAN CUANDO SON NECESARIOS


string User::getName(){
    return name; 
}
