/*
*/

// Punto Isoeléctrico

#include<iostream>
#include "Iso.h" // incluimos nuestra clase Iso
using namespace std; 

double Iso::CalculaPuntoIso(double pka1, double pka2)
{
    double pI = (pka1 + pka2) / 2;
    return pI;
}