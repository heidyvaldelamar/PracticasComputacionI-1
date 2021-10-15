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
  xInicial = x;
  yInicial = y;
}

float Punto2D::Trasladar(float temp1, float temp2){
  array <float, 2> T = {0.0};
  T[0]= (xInicial + temp1);
  T[1]= (yInicial + temp2);
}

float Punto2D::RotarRespectoAlOrigen(float temp1){
  array<float, 2> T = {0.0};
  T[0]=(xInicial * cos(temp1))-(yInicial * sin(temp1));
  T[0]=(xInicial * sin(temp1)) + (yInicial * cos(temp1));
}

float Punto2D::Escalar(float temp1, float temp2){
  array<float, 2> T = {0.0};
  T[0] = (xInicial * temp1);
  T[1] = (yInicial * temp2);
}

float Punto2D::GetX() const{
  return T[0];
}

float Punto2D::GetY()const{
  return T[1];
}


