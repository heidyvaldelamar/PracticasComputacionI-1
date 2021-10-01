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

    Triangle t1, t2;
    // Traingulo 1
    t1.setAltura(2.5);
    t1.setBase(4.5);
    cout << "El area de t1 es: "<< t1.getArea() << endl;

    // Traingulo 2
    t2.setAltura(3.5);
    t2.setBase(5.5);
    cout << "El area de t1 es: "<< t2.getArea() << endl;
    return 0;
}