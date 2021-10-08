/*
author: SOFIA PALACIOS CUEVAS
e-mail: sofiapalacioscuevas@comunidad.unam.mx
  date: 07 OCT 2021
*/

#include<iostream>
#include "PH.h"

using namespace std;

int main(){

    char op = '1';
    double pka1 = 0.0;
    double pka2 = 0.0;
    double pI = 0.0;

    cout << "Calculadora de Bioquimica" << endl << endl;
    cout << "Procedimento elegido: ";
    op = PedirOperacion();
    switch (op)
    {
      case '1':
        double CalculaPH();
        break;
      case '2':
        break;
      case '3':
        break;
      case '4':
        break;
    }

    return 0;
}

char PedirOperacion()
{
  char op;
  do{
    cout << "Seleccione un procedimiento" << endl;
    cout << "1 : Calcular pH" << endl;
    cout << "2 : Especie con mayor presencia" << endl;
    cout << "3 : Calcular PM de proteina" << endl;
    cout << "4 : Calcular punto isoelectrico" << endl << endl;
  }while (op != '1' && op !='2' && op !='3' && op != '4');
  return op;
}