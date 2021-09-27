
#include <iostream>
using namespace std;

// SOBRECARGA DE FUNCIONES
int sum(int a, int b);
float sum(float a, float b);

// PLANTILLAS PARA EVITAR LA DEFINICIÓN DE MÚLTIPLES FUNCIONES
template <typename T>
T sum2(T a, T b);

int main(){
    int a = 1, b = 3;
    float c = 0.5, d = 4.5;
    cout << "La suma de dos enteros es: " << sum(a,b)<< endl;
    cout << "La suma de dos flotantes es: " << sum(c,d) <<endl;
    // Para sum2() Ambas cantidades deben ser del mismo tipo de dato
    cout << "La suma de 1 +6.7 es: " << sum2(1.0,6.7) << endl; 
}

int sum(int num1, int num2){
    return num1 + num2;
}

float sum(float a, float b){
    return a + b;
}

template <typename T>
T sum2(T a, T b){
    return a + b;
}

