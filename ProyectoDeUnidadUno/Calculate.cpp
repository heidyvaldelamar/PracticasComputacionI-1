/*
author: SOFIA PALACIOS CUEVAS
e-mail: sofiapalacioscuevas@comunidad.unam.mx
  date: OCT 16 2021
*/

// We add our header
#include "PH.h"
// libraries
#include<iostream>
#include<math.h>
#include<stdio.h>

using namespace std;

float PH::setValues(float x){
    result = x;
    return 0;
}

float PH::CalculatePH(float temp1, float temp2, float temp3){
   // result = - log10(((MolSusAg * VolSusAg) / (VolSusAg + VolAg)) + 0.0000001)
   // - (log10) did not work 
    a = temp1 * temp2;
    b = temp2 + temp3;
    c = a / b;
    
    result = (log10(c)) * (-1);

    return 0;
}

float PH::DominantSus(float temp1, float temp2){
    result = (-(temp1)) - (-(temp2));
    if(result == 0){
        cout << "Ambas especies estan en equilibrio" <<endl;
    }
    else{
        if(result < 0 ){
            cout << "La especie desprotonada predomina"<<endl;
        }
        else{
            cout << "La especie protonada predomina"<<endl;
        }
    }
    return 0;
}

float PH::IsoPoint(float temp1, float temp2){
    result = (temp1 + temp2)/2;
    return 0;
}

double PH::GetResult(){
    return result;
}

