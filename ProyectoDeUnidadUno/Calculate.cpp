/*
author: SOFIA PALACIOS CUEVAS
e-mail: sofiapalacioscuevas@comunidad.unam.mx
  date: OCT 16 2021
*/

// We add our header
#include "PH.h"
// libraries
#include<iostream>
#include<cmath>
#include<math.h>

using namespace std;

float PH::setValues(float x){
    result = x;
    return 0;
}

float PH::CalculatePH(float temp1, float temp2, float temp3){
   // pH = - log(((MolSusAg * VolSusAg) / (VolSusAg + VolAg)) + 0.0000001)
    float result = - log(((temp1 * temp2) / (temp2 + temp3)) + 0.0000001);
    return 0;
}

float PH::DominantSus(float temp1, float temp2){
    result = temp1 - temp2;
    if(result > 0){
        result = temp1;
    }
    else{
        if(result < 0){
            result = temp2;
        }
        else{
            result = 0;
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

