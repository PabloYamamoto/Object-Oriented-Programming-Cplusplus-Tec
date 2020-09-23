#include "Board.h"


Board::Board(){}

Board::Board(int rows, int cols){
    cout << endl; 
    for(int i = 1;i <= cols; i++){
        cout << "\t" << "\t" << "Col: " << i; 
    }
    cout << endl; 
    cout << endl; 
    for(int i = 1;  i <= rows; i++){
        cout << "Row : " << i << "\t"; 
        for(int j = 1; j <= cols; j++){

            cout << '\t' << "*" << '\t'; 
        }
        cout << endl; 
    }
    cout << "" << endl; 
}

Board::~Board(){}

int Board::getRows(){
    return rows; 
}

int Board::getCols(){
    return cols; 
}

string Board::getColor(){
    return color; 
}


void Board::setRows(int rows){
    this->rows = rows; 
}

void Board::setCols(int cols){
    this->cols = cols; 
}

void Board::setColor(string color){
    this->color = color; 
}

void Board::setBoard(){
    cout << endl; 
    cout << "=================================================" << endl; 
    cout << "Enter the number of rows: ", cin >> rows; 
    setRows(rows); 
    cout << "=================================================" << endl;

    cout << "Entoncer the number of cols: ", cin >> cols; 
    setCols(cols); 
    cout << "=================================================" << endl; 
    cout << endl; 

    Board(rows, cols); 

}