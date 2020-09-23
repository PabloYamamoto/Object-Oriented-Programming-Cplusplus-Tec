#include <iostream>
using namespace std; 

#pragma once 
class Tax{
    private:
        double money; 
        double percentage; 
        double total_payment; 

    public: 
        Tax(); 
        Tax(double money, double percentage); 
        ~Tax(); 

        double getMoney(); 
        double getPercentage(); 
        double getTotal_payment(); 

        void setMoney(double money);
        void setPerc(double percentage); 
        void setTotal(double total_payment); 
        
        void Calculate(); 



}; 