#include "Fecha.h"

int main(){

    Fecha *LaFecha = new Fecha(); 
    
    int option; 
   
    while(true){


        cout << endl; 
        cout << "======= Print Date =========== Formats available" << endl; 
        cout << endl; 
        cout << "0.- Enter the Date " << endl; 
        cout << "1.- Day - Name of the Month === Example (14-march) " << endl; 
        cout << "2.- Day - Name of the Month - Year === Example (14-march-2020) " << endl; 
        cout << "3.- Day / # of the Month === Example (14/03) " << endl; 
        cout << "4.- Day / # of the Month / Year === Example (14/03/2020) " << endl;
        cout << "5.- Print Actual Date  " << endl; 
        cout << "6.- Exit Program" << endl; 
        cout << endl;  
        cout << "How do you want to print the date ? Select a number "; cin >> option;
        cout << endl;  


        if(option == 6){
            break; 
        }
        else if(option == 0){

            int d, m, a; 
            cout << endl; 
            cout << "Enter the day, month and year (all numbers) separated by a space: ", cin >> d >> m >> a; 
            LaFecha->setFecha(d, m, a); 
        }
        else if(option == 1){
            LaFecha->printDayandName(); 
            cout << endl; 
        }
        else if(option == 2){
            LaFecha->printDayandNameandYear(); 
            cout << endl; 
        }
        else if(option == 3){
            LaFecha-> printDayandMonth(); 
            cout << endl; 

        }
        else if(option == 4){
            LaFecha->printdmy(); 
            cout << endl; 

        }
        else if(option == 5){
            LaFecha->printActual(); 

        }
        else{
            cout << endl; 
            cout << "Try Again" << endl; 
            cout << endl; 
        }
    }

    delete LaFecha; 
}

// g++ -std=c++17 main.cpp -std=c++17 Fecha.cpp -o main