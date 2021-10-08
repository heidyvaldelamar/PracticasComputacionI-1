/*
*/

// Punto Isoeléctrico

#include<iostream>
#include "Iso.h" // incluimos nuestra clase Iso
using namespace std; 

double Iso::CalculaPuntoIso(double pka1, double pka2)
{
    cout << "Ingrese las constantes de acidez" <<endl;
    cout << "pka1: ";
    cin >> pka1;
    cout << "pka2: "; 
    cin >> pka2;

    double CalculaPuntoIso(double pka1, double pka2){
        double pI = (pka1 + pka2) / 2;
        return pI;
    }
}