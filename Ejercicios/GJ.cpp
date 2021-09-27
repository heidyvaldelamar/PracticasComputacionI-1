/*
*/

#include <iostream>
#include <array>
using namespace std;

//array<array<int, 4>, 3> A{{2,1,-1,8},{-3,-1,2,-11}, {-2, 1, 2, -3}};

const int filas = 3, cols = 4;

int A[3][4]{{2,1,-1,8},
            {-3,-1,2,-11}, 
            {-2, 1, 2, -3}};

int encontrarPivote(int row, int col);

int main(){
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 3 ; j++){
            int pivote = A[i][i]; // diagonal principal
            if (pivote != 0){
                // Realizar eliminación
            }
            else{

            }
        }
    }
    return 0;
}

int encontrarPivote(int row, int col){
    int max = -999999;
    int indiceFila = -1;
    for (int j = row + 1; j<filas; j++){
        if(A[j][col] > max){
            max = A[j][col];
            indiceFila = j;
        }
        
    }
    return indiceFila;
}