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
array<float, LEN> SumarArreglos(array<float, LEN> arr, array<float, LEN>arr2);

///////////////////////////////////////////////////// MAIN FUNCTION ///////////////////////////////////////////////////////////////////////////

int main()
{
    char decision;
    array<float, LEN> arr = { 0 };  // START THE ARRAY WITH 0
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
        array<float, LEN> arr2 = { 0 }; // CREATION OF 2ND ARRAY, STARTED IN 0
        arr2 = LlenarArreglo(); // WE AKS THE USER TO FILL THE 2ND ARRAY; WE ASIGN IT TO OUR NEW ARRAY
        arr = SumarArreglos(arr, arr2); // WE ADD BOTH ARRAYS ELEMENT TO ELEMENT; WE REASIGN THE RESULT TO MAIN ARRAY
        }
    cout << "Resultado: ";
    ImprimirArreglo(arr); // WE PRINT THE RESULT OF THE OP. OVER THE MAIN ARRAY
    return 0;
}
//////////////////////////////////////////////////////// SECONDARY FUNCTIONS /////////////////////////////////////////////////////////////////
// PRINT THE ELEMENTS OF 'arreglo' ARRAY WITH AN SPACE BETWEEN ELEMENTS
    void ImprimirArreglo(array<float, LEN> arreglo)
    {
        for(int i = 0; i < LEN; i++)
            cout << arreglo[i] << ' ';
        cout << '\n';
    }

// FILL A LENGTH = LEN ARRAY AND RETURN IT AS RESULT
array<float, LEN>LlenarArreglo()
    {
        for (int i = 0; i < LEN; i++){
            float arr;
            cin >> arr[LEN];
        }
        return (arr);
    }

// MULTIPLY EACH ELEMENT OF 'arreglo' ARRAY BY FACTOR 'mult'
array<float, LEN> MultiplicarArreglo(array<float, LEN> arreglo, float multiplo)
    {
        float arr, multiplo
        arr = arreglo * multiplo;
        return (arr);
    }

// ADD EACH ELEMENT OF 'arr1' & 'arr2' AND RETURN RESULT ARRAY
array<float, LEN> SumarArreglos(array<float, LEN> arr, array <float, LEN> arr2)
    {
        float arr, arr2;
        arr = arr + arr2;
        return (arr);
    }
