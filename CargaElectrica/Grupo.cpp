/*
author: SOFIA PALACIOS CUEVAS
  date: NOV 01 2021
*/
# include <string>
# include <array>
# include <iostream>


#include "Grupo.h"

using namespace std;

Grupo::Grupo(){
  name = " ";
  pkr= 0;
  charge = 0;
}

// le decimos que nuestras variables del constructor de arriba son
// las mismas que las de las instrucciones del main
Grupo::Grupo(string nombreGrupo, float pkGrupo, int cargaGrupo){
  name = nombreGrupo;
  pkr = pkGrupo;
  charge = cargaGrupo;
}

// regresa la carga según su relación (<,>) con el pH
int Grupo::GetCarga(){

  return charge;
}

float Grupo::GetPkr(){
  return pkr;
}
