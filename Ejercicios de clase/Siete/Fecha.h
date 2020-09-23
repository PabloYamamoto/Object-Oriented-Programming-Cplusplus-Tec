#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

#pragma once
class Fecha {

private:
    int dia, mes, anio;
    string to_string(int);

public:
    Fecha();
    virtual ~Fecha();
    int getDia();
    int getMes();
    int getAnio();
    void setDia(int);
    void setMes(int);
    void setAnio(int);
    string getFecha();
    void setFecha(int const&, int const&, int const&);

    void printDayandName(); 
    void printDayandNameandYear(); 
    void printDayandMonth(); 
    void printdmy(); 
    void printActual(); 
    
};