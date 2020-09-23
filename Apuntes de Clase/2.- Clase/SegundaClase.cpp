#include <iostream>
#include <string>
using namespace std; 


// //Pasar Valores por referencia 


// void cambiaValores(int& num1, int num2){

//     num1 = 111111; 
//     num2= 222222; 
// }



// int main(){
    

//     int num1 = 1; 
//     int num2 = 2;
    
//     cout << "num1 antes de llamar la función cambiaValores vale: " << num1 << endl; 
//     cout << "num2 antes de llamar la función cambiaValores vale: " << num2 << endl; 

//     cambiaValores(num1, num2); 

//     cout << "num1 después de llamar la función cambiaValores vale: " << num1 << endl; 
//     cout << "num2 después de llamar la función cambiaValores vale: " << num2 << endl; 

// }


// Pasar valor por dirección


/* 

Pasar valores por dirección es lo mismo que apsar los valores originales
Para pasar los valores por dirección sólo es necesario que los parámetros sean apuntadores
Muy importante : Los valores se pueden modificar como si fueran los originales, pero LAS DIRECCIONES de los valores NO SE DEBEN MODIFICAR

*/

// void modify(int* value){
//     *value = 1000; 
// }

// int main(){
//     int value = 8; 
//     modify(&value); 
    
//     cout << "Observa como en la función se modifica la variable value: " << value << endl; 
// }




/*

                DISEÑO DE ORIENTADO A OBJETOS


Necesitamos una manera de modelar el mundo real
Lo primero que necesitamos algo para generalizar el mundo



*/

// Definir una clase

// class Persona{  //Las clases siempre inician con mayusucla

//     private:
//     string nombre; 
//     int edad; 
//     string dirección; 
//     int telefono; 
//     Persona* papa; //No es una instancia

//     public: 
//     Persona(){
//         edad = 0; 
//         nombre = "";
//     } //Constructor, no tiene valor de retorno, nisiquiera void
//     Persona(int laEdad, string elNombre, Persona* const elPapa){
//         edad = laEdad;
//         nombre = elNombre;
//         papa = elPapa;  

//     } //Constructor con parámetros


//     protected: 


// };

// int main(){
//     Persona* pedro = new Persona; 
//     Persona* juan = new Persona(20, "juan", pedro);
//     Persona pedrito = Persona(15, "pedrito", pedro);

// }