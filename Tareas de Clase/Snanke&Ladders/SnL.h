#include <vector>
#include <string>
using namespace std; 
#pragma once

class SnL{
    private:
        vector<char> Tablero; 
        string Jugador1; 
        string Jugador2; 
        int dado;
        SnL *juego; 
        int Posición1; 
        int Posición2; 
        

    public: 

        SnL(); 
        ~SnL(); 

        
        vector<char> getTablero(); 
        string getJugador1(); 
        string getJugador2(); 
        int getDado(); 
       

        
        void setTablero(vector<char> Tablero); 
        void setJugador(string Jugador); 
        void setJugador2(string Jugador2); 
        void setdado(int dado); 

        void start(); 
        void printboard(int posición); 
       

}; 