/*
*/

#include<iostream>
#include <string>

using namespace std;

class Triangle{
public:
// solo metodos / funciones
void setBase(double b){ // Establecer el valor para la base
    base = b;
}
void setAltura(double a){
    altura = a;
}
double getArea() const{
    return (base * altura) / 2;
}

private:
// atributos, variables
double base, altura;
};


int main (){
    return 0;
}