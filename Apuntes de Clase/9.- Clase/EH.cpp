#include <iostream>
using namespace std; 

class NotFundsException : public exception {
public : 
    const char* what()
    {
        return "no tienes fondos"; 
    }

}; 

class Account{
    int balance; 
public:
    Account():balance(100){}
    void withdraw(int amount){
        
        if(balance < amount)
            throw NotFundsException(); 
    }
    
}; 



int main()
{

   try{
       Account a; 
       a.withdraw(100); 
   }
   catch(NotFundsException &e){
       cout << "Nel " << e.what() << endl;  
   }
   
}

