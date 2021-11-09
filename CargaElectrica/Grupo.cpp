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

// regresa la carga según el tipo de radical
int Grupo::GetCarga(){
  float pH;
  float cargaMolecula;
  
   // hacemos uso de condicionales para cada grupo
  if (name== "Carboxilo"){
    if (pH < 2.16){
      cargaMolecula = 0;
    }
    else{
      cargaMolecula = -1;
    }
  }
  if (name == "Amino"){
    if (pH < 9.06){
      cargaMolecula = 1;
    }
    else{
      cargaMolecula = 0;
    }
  }
  if (name == "R"){
    if (pH < 10.54){
      cargaMolecula = 1;
    }
    else{
      cargaMolecula = 0;
    }
  }
  return cargaMolecula;
};