/*
author: SOFIA PALACIOS CUEVAS
e-mail: sofiapalacioscuevas@comunidad.unam.mx
  date: 14 SEP 2021
///////////////// PRACTICA 3: CALCULADORA ////////////////////////////
*/

#include<iostream>

using namespace std;

int main(){

    // we define our float variables, we make some type casting
    // beacause of the module oper
    float num1 = 0;
    int   n1 = (int)num1;
    float num2 = 0;
    int n2 = (int)num2;
    // we define our aitmethic operators
    char oper ='+';

    //the calculator may show this to the user
    cout << "Digite el primer numero"<<endl;
    cin >> num1; // read 1st number set by user 

    cout << "Operacion" <<endl;
    cin >> oper; // read the oper selected

    cout <<"Segundo numero" << endl;
    cin >> num2; // read 2nd number set by user

    switch(oper) // to help calculator do the correct operation
    {
        case '+':
            return num1 + num2;
        case '-':
            return num1 - num2;
        case '*':
            return num1 * num2;
        case '/':
            return num1 / num2;
        case '%':
            return n1 % n2;

    }
    
    cout << "$ ./ Calculadora";
    cout << "Este programa hace operaciones basicas entre dos numeros.";
    cout << "Primer numero:" << num1; 
    cout << "Operacion:" << oper;
    cout << "Segundo numero:" << num2;
    cout << "Resultado:";
    cout << num1 << oper << "=" << num2;
    
    return 0;
}