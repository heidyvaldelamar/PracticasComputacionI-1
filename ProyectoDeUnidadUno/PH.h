/*
author: SOFIA PALACIOS CUEVAS
e-mail: sofiapalacioscuevas@comunidad.unam.mx
  date: OCT 16 2021
*/

// Clase PH

class PH
{
    public:
        float result;
        float setValues(float x);
        float CalculatePH(float temp1, float temp2, float temp3);
        float DominantSus(float temp1, float temp2);
        float IsoPoint(float temp1, float temp2);
        double GetResult();
    private:
        int main(){
            PH myPH;
        return 0;
        }
};
