// SOFIA PALACIOS CUEVAS | NOV 08 2021 | EXAMEN PARCIAL 2

#include<iostream>
#include<array>
#include<string>
#include<stdio.h>
#include"animal.h"

using namespace std;
/* Se deberá programar un sistema para un Zoológico empleando el paradigma de
programación orientada a objetos (POO). En este zoológico se cuenta con jaulas
individuales para cada animal. 


Un ANIMAL debe tener los siguientes atributos (privados): 
 Nombre (string)
 Peso (float)
 Tipo (depredador/presa) (int 0= presa, 1= depredador )
 Número de Jaula (int)
Se deberán diseñar métodos públicos set y get para cada atributo.


Ingresa al menos 4 animales (2 depredadore y 2 presas).


PROBLEMAS A RESOLVER:
Diseñe un método para calcular el promedio de peso por tipo de animal
Diseñe un método para contar el número de animales por cada tipo
Diseñe un método para contar el número total de animales
Diseñe un método para imprimir todos los animales y sus jaulas asociadas.


ENTREGABLES:
Se deberá subir  
Código fuente funcional
Captura de pantalla donde se demuestre el funcionamiento del proyecto.
*/

int main(){
    cout << "BIENVENIDO AL REGISTRO DEL ZOO" << endl;
    Animal miAnimal;
    string Nombre = "";
    float Peso = 0;
    int Tipo = 0;
    int NumeroDeJaula = 0;
    cout << "Nombre del animal: ";
    cin >> Nombre;
    cout << "Peso del animal (kg): ";
    cin >> Peso;
    cout << "Tipo de animal (0 = presa, 1 = depredador): ";
    cin >> Tipo;
    cout << "# Jaula: ";
    cin >> NumeroDeJaula;




    return 0;
}





