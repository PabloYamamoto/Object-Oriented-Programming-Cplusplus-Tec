#include "Tax.h"

Tax::Tax(){}

Tax::Tax(double money, double percentage){
    cout << endl; 
    total_payment = (money*percentage); 
    cout << "The taxes are: " << percentage*100 << " %" << endl; 
    cout << "Initial amount: " << money << " $" << endl; 
    cout << "Total Payment would be: " << total_payment << " $" << endl; 
    cout << endl; 
}

Tax::~Tax(){}

double Tax::getMoney(){
    return money; 
}

double Tax::getPercentage(){
    return percentage; 
}

double Tax::getTotal_payment(){
    return total_payment; 
}

void Tax::setMoney(double money){
    this->money = money; 
}

void Tax::setPerc(double percentage){
    this->percentage=percentage; 
}

void Tax::setTotal(double total_payment){
    this->total_payment = total_payment; 
}


void Tax::Calculate(){

    cout << endl; 
    cout << "Enter the $: ", cin >> money; 
    setMoney(money); 
    cout << "Enter the % of the taxes divided by 100: "; cin >> percentage; 
    setPerc(percentage); 
    Tax(money, percentage); 

}