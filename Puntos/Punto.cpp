/*
author: SOFIA PALACIOS CUEVAS
e-mail: sofiapalacioscuevas@comunidad.unam.mx
  date: OCT 12 2021 
*/

#include "Punto.h"
// #include "corecrt_math.h" // para cos y sin <- no la encontró, usemos otra
#include <cmath>
#include <iostream>
#define Pi 3.14159265358979323846

using namespace std;


float Punto2D::SetPosicion(float x, float y){
  // We set our intial x and y values of our 2D point
  MiX = x; 
  MiY = y;
  return 0;
  
}

float Punto2D::Trasladar(float temp1, float temp2){
  // combinamos + y asignación
  MiX += temp1;
  MiY += temp2;
  return 0;
}

float Punto2D::RotarRespectoAlOrigen(float temp1){
  rot = MiX; 
  MiX = (rot * cos((temp1*Pi)/180)) - (MiY * sin((temp1*Pi)/180));
  MiY = (rot * sin((temp1*Pi)/180)) + (MiY * cos((temp1*Pi)/180));
  return 0;
}

float Punto2D::Escalar(float temp1, float temp2){
  // combinamos * y asignación
  MiX *= temp1;
  MiY *= temp2;
  return 0;
}

double Punto2D::GetX(){
  return MiX;
}

double Punto2D::GetY(){
  return MiY;
}




