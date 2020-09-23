#include <vector>
#include <string>
using namespace std; 

using namespace std; 

#pragma once
class Videogame{        //  Call of Duty - Videogame
    private: 
        string Name; 
        string Console_designed_for; 
        string Classification;  //Xbox, Playstation, etc.
        double Weight; //Gygabytes, Terabytes - whatever it takes to run the game
        vector <string> Levels; //Campaign, Multiplayer, Zombies, etc.
        vector <string> Weapons; //Weapons in the game
        double Points; 

    public: 
        Videogame(); 
        Videogame(string Console, string Classification, double Weight); 
        ~Videogame(); 

        string getName(); 
        string getConsole(); 
        string getClasification(); 
        double getWeight(); 
        vector<string> getLevels(); 
        vector<string> getWeapons(); 
        double getPoints(); 

        void setName(string Name); 
        void setConsole(string Console_designed_for); 
        void setClassification(string Classification); 
        void setWeight(double Weight); 
        void setLevels(vector<string> Levels);
        void setWeapons(vector<string> Weapons); 
        void setPoints(double Points); 

        void PrintCharacteristics(); 


}; 