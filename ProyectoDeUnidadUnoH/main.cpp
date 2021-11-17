/*
author: SOFIA PALACIOS CUEVAS
e-mail: sofiapalacioscuevas@comunidad.unam.mx
  date: 07 OCT 2021
*/

#include<iostream>

// Headers
#include "PH.h"

#pragma

using namespace std;

// Function declaration
// void askValues(float& x, float& y); <- DW
char AskOp();

int main(){
    // Our Class Instance
    PH myPH{};
    // float x = 0, y = 0; <- DW / askValues()
    float temp1 = 0, temp2 = 0, temp3 = 0;
    char option;

    // Let's ask the user to choose an option
    option = AskOp();
    switch (option)
    {
        case '1':
            // We ask the user to input the data
            cout << "Ingrese los siguientes datos:" << endl;
            cout << "Molaridad de la sustancia agregada:";
            cin >> temp1;
            cout << "Volumen de la sustancia agregada (L):";
            cin >> temp2;
            cout << "Volumen del agua (L):";
            cin >> temp3;
            // We calculate pH
            myPH.CalculatePH(temp1,temp2,temp3);
            myPH.
            break;
        case '2':
            cout << "Constante de acidez de la sustancia (pka): ";
            cin >> temp1;
            cout << "pH: ";
            cin >> temp2;
            myPH.DominantSus(temp1, temp2);
            break;
        case '3':
            cout << "pka1: ";
            cin >> temp1;
            cout << "pka2: ";
            cin >> temp2;
            myPH.IsoPoint(temp1, temp2);
            break;
    }
    cout << "Resultado: "<< myPH.GetResult();
    return 0;
}


char AskOp()
{
    char op;
    do{
        cout << "      Calculadora de Bioquimica      " << endl;
        cout << "-------------------------------------" << endl <<endl;
        cout << "Seleccione un procedimiento" << endl;
        cout << "1 : Calcular pH" << endl;
        cout << "2 : Especie con mayor presencia" << endl;
        cout << "3 : Calcular punto isoelectrico" << endl << endl;
        cout << "Procedimeinto elegido: ";
        cin >> op;
    }while (op != '1' && op !='2' && op !='3');
    return op;
}
