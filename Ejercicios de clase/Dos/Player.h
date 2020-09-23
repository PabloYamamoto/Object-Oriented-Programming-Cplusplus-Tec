#include <string>
using namespace std; 

#pragma once
class Player{
    private: 
        string Gamertag; 
        double Score; 
        int Heal; 
        int Attack; 
        double Timeplayed; 
        string Console; 


    public: 

        Player(); 
        Player(string Gamertag, double Score, string Console); 
        ~Player(); 

        string getGamertag(); 
        int getHeal(); 
        int getAttack(); 
        double getScore(); 
        double getTime(); 
        string getConsole(); 

        void setGamertag(string Gamertag); 
        void setAttack(int Attack); 
        void setHeal(int Heal); 
        void setScore(double Score); 
        void setTime(double Timeplayed); 
        void setConsole(string Console); 

        void Battle(); 
        void sendMessage(); 
        void TurnoffConsole(); 
        void PlayerInfo(); 

}; 