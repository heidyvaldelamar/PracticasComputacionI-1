/*
*/

// Para la función pH

#include "PH.h"
#include<iostream>
#include<math.h> // para poder sacar el logaritmo

using namespace std;

double CalculaPH(double MolSusAg, double VolSusAg, double VolAg)
{
    double pedirValoresPH();
    double pH = -log(((MolSusAg * VolSusAg) / (VolSusAg + VolAg)) + 0.0000001);
    return pH;
}

double pedirValoresPH(double &MolSusAg, double &VolSusAg, double &VolAg)
{
   
    cout << "Ingrese valores iniciales" << endl;
    cout << "Molaridad de la sustancia aregada";
    cin >> MolSusAg;
    cout << "Volumen de la sustancia agregada (L)";
    cin >> VolSusAg;
    cout << "Volumen del agua (L)";
    cin >> VolAg;

}