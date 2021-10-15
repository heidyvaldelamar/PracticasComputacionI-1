/*
author: SOFIA PALACIOS CUEVAS
e-mail: sofiapalacioscuevas@comunidad.unam.mx
  date: OCT 12 2021 
*/

#include "Punto.h"
#include "corecrt_math.h" // para cos y sin
#include <iostream>
#include <array>

using namespace std;

float Punto2D::SetPosicion(float x, float y){
  //TODO
}

float Punto2D::Trasladar(float temp1, float temp2){
  float tras[2] = {x + temp1 , y + temp2};
  cout << "Posición final: \n";
  cout << tras;
}

float Punto2D::RotarRespectoAlOrigen(float temp1){
  float rot[2]={(x * cos(temp1))-(y * sin(temp1)), (x * sin(temp1)) + (y * cos(temp1))};
  cout << "Posicion final:\n";
  cout << rot;
}

float Punto2D::Escalar(float temp1, float temp2){
  //TODO
}

float Punto2D::GetX(){
  //TODO
}

float Punto2D::GetY(){
  //TODO
}


