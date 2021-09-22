/*/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
author: SOFIA PALACIOS CUEVAS
e-mail: sofiapalacioscuevas@comunidad.unam.mx
  date: 21 SEP 2021
//////////////////////////////////////////////////// PRACTICA 4. ARREGLOS /////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////// COMPUTACION I UNAM-EJ ///////////////////////////////////////////////////////////////////*/

#include <iostream>
#include <array>

#define LEN 3 // NUMBER OF ELEMENTS WITHIN THE ARRAYS

using namespace std; //TO SIMPLIFY FUNCITON CALLING

////////////////////////////////////////////////// VARIABLE DECLARATION ///////////////////////////////////////////////////////////////////////

void ImprimirArreglo(array<float, LEN> arreglo);
array<float, LEN> LlenarArreglo(void);
array<float, LEN> MultiplicarArreglo(array<float, LEN> arreglo, float multiplo);
array<float, LEN> SumaArreglos(array<float, LEN> arr1, array<float, LEN>arr2);

///////////////////////////////////////////////////// MAIN FUNCTION ///////////////////////////////////////////////////////////////////////////

int main()
{
    char decision;
    array<float, LEN> arr = { 0 };  // INITIALIZING THE ARRAY WITH 0
    arr = LlenarArreglo(); // ASKING THE USER TO FILL AN ARRAY; WE ASIGN IT TO OUR MAIN ARRAY
    cout << "Operación: ";
    cin >> decision;
    // FOR WHEN THE USER CHOOSES OTHER OPERATOR RATHER THAN '+' OR '*', WE ASK THE USER FOR IT
    while(decision != '+' && decision != '*')
    {
        cout << "Operación: ";
        cin >> decision;
    }
    // IF MULTIPLICATION
    if (decision == '*'){
        float factor;
        cout << "Factor: ";
        cin >> factor; // ASKING FOT THE FACTOR TO MULTIPLY
        arr = MultiplicarArreglo(arr, factor); // MAIN ARRAY x FACTOR; ASIGNING THE RESULT TO MAIN ARRAY
    }
    // IF ADDITION
    else if(decision == '+'){
        array<float, LEN> array2 = { 0 }; // CREATION OF 2ND ARRAY, STARTED IN 0

    }
    return 0;
}

