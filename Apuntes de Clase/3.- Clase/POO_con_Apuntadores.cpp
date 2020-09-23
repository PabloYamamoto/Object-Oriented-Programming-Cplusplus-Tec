#include <iostream>
using namespace std; 

class Invoice{
    private: 
        double amount; 
        string clientName; 

    public: 
        void setAmount(double amount){
            this->amount = amount; 
        }

        double getAmount(){
            return amount; 
        }


}; 

int main(){

    Invoice *marchInvoice = new Invoice; 
    marchInvoice-> setAmount(10000); 

    cout << (*marchInvoice).getAmount() << endl; 
    cout << marchInvoice->getAmount() << endl; 
    cout << marchInvoice[0].getAmount() << endl; 

    delete marchInvoice; 

}



