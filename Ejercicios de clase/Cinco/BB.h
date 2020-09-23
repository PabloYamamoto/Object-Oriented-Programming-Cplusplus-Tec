#include <iostream>
#include <string>
using namespace std; 

#pragma once
class BB{
    private:
        string *NameTeam1, *NameTeam2; 
        int *Score1, *Score2; 
        int Timeleft; 


    public: 
        BB(); 
        ~BB(); 

        string getName1(); 
        string getName2(); 
        int getScore1();
        int getScore2();  
        int getTimeleft(); 

        void setName1(string *NameTeam1);
        void setName2(string *NameTeam2); 
        void setScore1(int *Score1); 
        void setScore2(int *Score2); 
        void setTimeleft(int Timeleft);  



}; 