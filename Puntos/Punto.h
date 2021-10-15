/*
author: SOFIA PALACIOS CUEVAS
e-mail: sofiapalacioscuevas@comunidad.unam.mx
  date: OCT 12 2021
*/
#ifndef PUNTOS_PUNTO_H
#define PUNTOS_PUNTO_H
#include<iostream>
#include <array>
using namespace std;

class Punto2D
{
  public:
        float MiX, MiY, rot;
        float SetPosicion( float x, float y); 
        float Trasladar(float temp1, float temp2);
        float RotarRespectoAlOrigen( float temp1);
        float Escalar (float temp1, float temp2);
        double GetX();
        double GetY();
  private:
        int main(){
          Punto2D miPunto; // Agreguemos las instancias creadas en main() de Puntos.cpp
        return 0;
        }
          
};

#endif