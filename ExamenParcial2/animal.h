// SOFIA PALACIOS CUEVAS | NOV 08 2021 | EXAMEN PARCIAL 2

// clase Animal
#pragma
#include<iostream>
#include<string>
#include<array>
using namespace std;

class Animal{
    private:
        string Nombre;
        float Peso;
        int Tipo, NumeroDeJaula;
        int main(){
            Animal miAnimal;
            return 0;
        }
        array <int, numAninmales> animalTipo;
    public:
        void setNombre(), setPeso(), setTipo(), setNumeroDeJaula();
        string getNombre();
        float  getPeso();
        int getTipo(), getNumeroDeJaula();
        float PesoPromTipo();
        int AnimPorTipo();
        int TotalAnimales();


};

