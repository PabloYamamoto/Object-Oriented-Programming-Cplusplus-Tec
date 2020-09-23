#include <stdio.h>
#include "Fecha.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include <ctime>
using namespace std;

Fecha::Fecha(){
    dia = 1;
    mes = 2;
    anio = 2019;}

Fecha::~Fecha(){}

int Fecha::getDia() {
    return dia;
}

int Fecha::getMes() {    
    return mes;
}

int Fecha::getAnio() {
    return anio;
}

void Fecha::setDia(int d) {
    dia = d;
}

void Fecha::setMes(int m) {
    mes = m;
}

void Fecha::setAnio(int a) {
    anio = a;
}


string Fecha::getFecha() {
    return to_string(dia) + "/" + to_string(mes) + "/" + to_string(anio);
}

void Fecha::setFecha(int const &d, int const &m, int const &a){
    dia = d;
    mes = m;
    anio = a;
}

string Fecha::to_string(int n) {
    stringstream s;
    s << n;
    return s.str();
}

void Fecha::printDayandName(){
    string mes; 
    if(getMes() == 1){
        mes = "January"; 
    }
    else if(getMes() == 2){
        mes = "February"; 
    }
    else if(getMes() == 3){
        mes = "March"; 
    }
    else if(getMes() == 4){
        mes = "April"; 
    }
    else if(getMes() == 5){
        mes = "May"; 
    }
    else if(getMes() == 6){
        mes = "June"; 
    }
    else if(getMes() == 7){
        mes = "July"; 
    }
    else if(getMes() == 8){
        mes = "August"; 
    }
    else if(getMes() == 9){
        mes = "September"; 
    }
    else if(getMes() == 10){
        mes = "October"; 
    }
    else if(getMes() == 11){
        mes = "November"; 
    }
    else{
        mes = "December"; 
    }

    cout << to_string(getDia()) + "-" + mes; 

}

void Fecha::printDayandNameandYear(){
     
    printDayandName(); 
    cout << "-" + to_string(getAnio()) << endl; 
}

void Fecha::printDayandMonth(){
    cout << to_string(getDia()) + "/" + to_string(getMes()); 
}

void Fecha::printdmy(){
    printDayandMonth(); 
    cout << "/" + to_string(getAnio()); 
}

void Fecha::printActual(){
    auto t = time(nullptr);
    auto tm = *localtime(&t);

    ostringstream oss, oss2;
    oss << put_time(&tm, "%d-%m-%Y");
    oss2 << put_time(&tm, "%H-%M-%S"); 
    auto str = oss.str();
    auto str2 = oss2.str(); 

    cout << "Actual Date : " << str << " =========== " << " Actual Time : " << str2 << endl;
}