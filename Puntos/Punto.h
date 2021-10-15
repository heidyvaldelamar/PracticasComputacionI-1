/*
author: SOFIA PALACIOS CUEVAS
e-mail: sofiapalacioscuevas@comunidad.unam.mx
  date: OCT 12 2021
*/
#include <array>
using namespace std;

class Punto2D
{
    private:
        float xInicial,yInicial;
        array<float,2> &T ={0.0};
    public:
        float SetPosicion( float x, float y); 
        float Trasladar(float temp1, float temp2);
        float RotarRespectoAlOrigen( float temp1);
        float Escalar (float temp1, float temp2);
        float GetX() const;
        float GetY()const;
}miPunto;