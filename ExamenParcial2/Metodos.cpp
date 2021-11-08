// SOFIA PALACIOS CUEVAS

#include "animal.h"
#include <iostream>
#include <string>


void Animal::setNombre(){
    string Nombre;
    cin>>Nombre;
}
void Animal::setPeso(){
    float Peso;
    cin >> Peso;
}
void Animal::setTipo(){
    int Tipo;
    cin >> Tipo;
}
void Animal::setNumeroDeJaula(){
    int NumeroDeJaula;
    cin >> NumeroDeJaula;
}
string Animal::getNombre(){
    string Nombre;
    return Nombre;
}
float Animal::getPeso(){
    float Peso;
    return Peso;
}
int Animal::getTipo(){
    int Tipo;
    return Tipo;
}
int Animal::getNumeroDeJaula(){
    int NumeroDeJaula;
    return NumeroDeJaula;
}
// Para los métodos de arriba puede uarse un template (uno para get y otro para set)

float Animal::PesoPromTipo(){
    Animal miAnimal;
    float Promedio = 0;
    float SumaPeso = 0;
    array <int, 4> animalTipo;
    for (int i = 0; i < animalTipo.size(); i++){
        SumaPeso += miAnimal.getPeso[i];
        Promedio = SumaPeso/4;
        return Promedio;
    };
}

int Animal::AnimPorTipo(){

}
int Animal::TotalAnimales(){

}

