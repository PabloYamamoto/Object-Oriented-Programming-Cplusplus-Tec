#include <iostream>
#include "SnL.h"
#include <cstdlib>

SnL::SnL(){

    Tablero    =  {'N', 'N', 'N', 'L', 'S', 'N', 
                   'N', 'N', 'N', 'S', 'N', 'N',   
                   'N', 'L', 'N', 'N', 'N', 'N',   
                   'N', 'N', 'N', 'S', 'N', 'N', 
                   'L', 'N', 'N', 'N', 'N', 'N' 
                   
                   }; 
    
    Jugador1 = ""; 
    Jugador2 = ""; 

}

SnL::~SnL(){}

vector<char> SnL::getTablero(){  
    return Tablero; 
}

string SnL::getJugador1(){
    return Jugador1; 
}

string SnL::getJugador2(){
    return Jugador2; 
}

int SnL::getDado(){
    dado = (rand()%6)+1;  
    return dado; 
}

void SnL::setTablero(vector<char> Tablero){
    this->Tablero = Tablero; 
}

void SnL::setJugador(string Jugador1){
    this->Jugador1 = Jugador1; 
}

void SnL::setJugador2(string Jugador2){
    this->Jugador2=Jugador2; 
}
void SnL::setdado(int dado){
    this->dado = dado; 
}

void SnL::printboard(int posición){
    cout << endl; 
    cout << "=========================================== Tablero ========================================= " << endl; 
    cout << endl; 
    
    for(int i = 0 ; i <= 30; ++i){
        if(i+1 == posición)
            cout << "J ->"; 

        cout << '\t' << Tablero[i] << '\t';
        
        if(i == 0){
            continue; 
        }
        else if(i == 5 || i == 11 || i == 17 || i == 23 || i == 29 ){
            cout << endl; 
            }
        }
        
    
    cout << endl; 
    cout << "============================================================================================= " << endl;
    cout << endl; 



}

void SnL::start(){
    cout << "==================================" << endl; 
    cout << endl; 
    cout << "Ingresa el nombre del Jugador 1: ";
    cin >> Jugador1; 
    setJugador(Jugador1); 
    cout << "Ingresa el nombre del Jugador 2: ";
    cin >> Jugador2; 
    setJugador2(Jugador2); 
    cout << "======================================" << endl; 
    cout << endl; 


  
    Posición1 = 1; 
    Posición2 = 1; 
    char escape; 

    while(true){
        
        cout <<  "===================== Jugador 1 ====================" << endl; 
        cout << "======================= " << getJugador1() << " =========================" << endl;
        cout << endl; 
        cout << "Posición: "  << Posición1 << endl; 
        cout << endl; 
        cout << "Presiona C para continuar y rolar el dado o E para salir del juego (C/E) "; cin >> escape; 
        cout << "===============================================================================" << endl; 
        printboard(Posición1); 

        if(escape == 'E' || escape == 'e')
            break; 
        else{
            dado = getDado(); 
            cout << endl; 
            cout << "=========================================" << endl; 
            cout << "El dado arrojo: " << dado;  
            Posición1 += dado; 
            
            if(Tablero[Posición1-1] == 'N'){
                cout << endl; 
                cout << "========================================" << endl;
                cout << "Avanzas: " << dado << " Casillas" << endl; 
                cout << "========================================" << endl;
                printboard(Posición1); 
                cout << "Tu nueva posición es la casilla número: " << Posición1 << endl; 
                cout << endl; 
      
            }
            else if(Tablero[Posición1-1] == 'S'){
                cout << endl; 
                cout << "===========================================" << endl; 
                cout << "Parece que caiste en una serpiente!!!! Retrocedes 3 casillas" << endl; 
                cout << "===========================================" << endl; 
                Posición1 -= 3; 
                
                printboard(Posición1);
                cout << "Tu nueva posición es la casilla número: " << Posición1 << endl; 
                cout << endl; 

            }
            else if(Tablero[Posición1-1] == 'L'){
                cout << endl; 
                cout << "===========================================" << endl; 
                cout << "Parece que caiste en una escalera!!!! Avanza 3 casillas" << endl; 
                cout << "===========================================" << endl; 
                Posición1 += 3; 
                
                printboard(Posición1);
                cout << "Tu nueva posición es la casilla número: " << Posición1 << endl; 
                cout << endl; 
            }

        }

        if(Posición1 == 30 || Posición1 > 30){
            cout << endl; 
            cout << "===========================================" << endl; 
            cout << "JUGADOR 1 ES EL GANADOR!!!! BRAVO " << getJugador1() << endl; 
            cout << "===========================================" << endl; 
            break; 
        }

        else {

        cout <<  "===================== Jugador 2 ====================" << endl; 
        cout << "======================= " << getJugador2() << " =========================" << endl;
        cout << endl; 
        cout << "Posición: "  << Posición2 << endl; 
        cout << endl; 
        cout << "Presiona C para continuar y rolar el dado o E para salir del juego (C/E) "; cin >> escape; 
        cout << "===============================================================================" << endl; 
        printboard(Posición2); 

        if(escape == 'E' || escape == 'e')
            break; 
        else{
            dado = getDado(); 
            cout << endl; 
            cout << "=========================================" << endl; 
            cout << "El dado arrojo: " << dado;  
            Posición2 += dado; 
            
            if(Tablero[Posición2-1] == 'N'){
                cout << endl; 
                cout << "========================================" << endl;
                cout << "Avanzas: " << dado << " Casillas" << endl; 
                cout << "========================================" << endl;
                printboard(Posición2); 
                cout << "Tu nueva posición es la casilla número: " << Posición2 << endl; 
                cout << endl; 
      
            }
            else if(Tablero[Posición2-1] == 'S'){
                cout << endl; 
                cout << "===========================================" << endl; 
                cout << "Parece que caiste en una serpiente!!!! Retrocedes 3 casillas" << endl; 
                cout << "===========================================" << endl; 
                Posición2 -= 3; 
                
                printboard(Posición2);
                cout << "Tu nueva posición es la casilla número: " << Posición2 << endl; 
                cout << endl; 

            }
            else if(Tablero[Posición2-1] == 'L'){
                cout << endl; 
                cout << "===========================================" << endl; 
                cout << "Parece que caiste en una escalera!!!! Avanza 3 casillas" << endl; 
                cout << "===========================================" << endl; 
                Posición2 += 3; 
                
                printboard(Posición2);
                cout << "Tu nueva posición es la casilla número: " << Posición2 << endl; 
                cout << endl; 
            }

        }

        if(Posición2 == 30 || Posición2 > 30){
            cout << endl; 
            cout << "===========================================" << endl; 
            cout << "JUGADOR 2 ES EL GANADOR!!!! BRAVO " << getJugador2() << endl; 
            cout << "===========================================" << endl; 
            break; 
        }


        }

        

        
    }

    
    cout << endl; 
    cout << "==============================================" << endl; 
    cout << "============ Gracias por Jugar!! ============= " << endl; 
    cout << "==============================================" << endl;
    cout << endl;  

}



