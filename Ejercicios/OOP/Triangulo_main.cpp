/*
*/

#include<iostream>
#include <string>
#include <array>

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

    /*
    Triangle t1, t2;
    // Traingulo 1
    t1.setAltura(2.5);
    t1.setBase(4.5);
    cout << "El area de t1 es: "<< t1.getArea() << endl;

    // Traingulo 2
    t2.setAltura(3.5);
    t2.setBase(5.5);
    cout << "El area de t1 es: "<< t2.getArea() << endl;
    */

   array <Triangle, 10> arrT;
   array <double, 10 > areas;

   int maxT{0}, minT{0};

   double minArea = 9999999999;
   double maxArea = -9999999999;

   for(int i = 0; i<10; i++){
       arrT[i].setBase((i+1) * 3.5);
       arrT[i].setAltura((i+1) * 5.6);
       double currentArea = arrT[i].getArea();

       // Triangulo mas pequeno
       if(currentArea < minArea){
        minArea = currentArea;
        minT = i + 1; 
       }
       // Triangulo mas grande
       if(currentArea > maxArea){
        maxArea = currentArea;
        maxT = i + 1; 
       }
    
    }
    cout << "El triangulo mas pequeño es: " << minT <<" y tiene un area de: "<< minArea << endl;
    cout << "El triangulo mas grande es: " << maxT <<" y tiene un area de: "<< maxArea << endl;

    return 0;
}