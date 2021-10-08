/*
*/

// Para la función pH

#include "PH.h"
#include<math.h> // para poder sacar el logaritmo

double CalculaPH(double VolSusAg, double MolSusAg, double VolAg)
{
    double pH = -log(((MolSusAg * VolSusAg) / (VolSusAg + VolAg)) + 0.0000001);
    return pH;
}
