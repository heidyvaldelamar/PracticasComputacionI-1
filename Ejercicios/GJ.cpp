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

int encontrarPivote(int fila, int col);
void intercambiarFilas(int f1, int f2);
void imprimirMatriz(void);

int main(){
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 3 ; j++){
            int pivote = A[i][i]; // diagonal principal
            if (pivote == 0){
                imprimirMatriz();
               int nuevaFila = encontrarPivote(i, j);
                if (nuevaFila == -1){
                    cout << "El sistema de ecuaciones no tiene solucion" <<endl;
                    exit(0);
                }
                else{
                    //Realizar intercambio de filas (i, nuevaFila)
                    intercambiarFilas(i, nuevaFila);
                    pivote = A[i][i];
                    imprimirMatriz();
                }
            }
            // Realizar eliminacion
            // TODO:
            // 1) multiplo
            // 2) Efectuar operacion (tmp)
            // 3) Escribir resultado
            
        }
    }
    return 0;
}

int encontrarPivote(int fila, int col){
    int max = -999999;
    int indiceFila = -1;
    for (int j = fila + 1; j<filas; j++){
        if(A[j][col] > max && A[j][col] != 0){
            max = A[j][col];
            indiceFila = j;
        }
        
    }
    return indiceFila;
}

void intercambiarFilas(int f1, int f2){ // cambio elemento por elemento
    int aux[cols];
    for(int i = 0; i < cols; i++){
        aux[i] = A[f1][i]; // arreglo[fila][col]
        A[f1][i] = A[f2][i];
        A[f2][i] = aux[i];
    }
}

void imprimirMatriz(void){
    for (int i = 0; i < filas; i++){
        for(int j = 0; j < cols; j++){
            cout << A[i][j] << " " ; 
            cout << endl;
        }
    }
}