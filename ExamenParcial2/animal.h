// SOFIA PALACIOS CUEVAS | NOV 08 2021 | EXAMEN PARCIAL 2

// clase Animal

#include<iostream>
#include<string>
using namespace std;

class Animal{
    private:
        string Nombre;
        float Peso;
        int Tipo, NumeroDeJaula;
    public:
        string setNombre(), getNombre();
        float setPeso(), getPeso();
        int setTipo(), setNumeroDeJaula(), getTipo(), getNumeroDeJaula();


};

string setNombre(){
    string Nombre;
    cin>>Nombre;
}