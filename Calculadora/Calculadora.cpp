/*
author: SOFIA PALACIOS CUEVAS
e-mail: sofiapalacioscuevas@comunidad.unam.mx
  date: 14 SEP 2021
///////////////// PRACTICA 3: CALCULADORA ////////////////////////////
*/

/* pseudocode

procedure calulate(n1,oper,n2)
    /* Inputs: n1: 1st number (float)
               oper: arit operator 
               n2: 2nd number (float)
       Outputs: n1 oper n2 = result (float)

    print "$ ./ Calculadora":
    print " ":
    print "Este programa hace operaciones basicas entre dos numeros.":
    print "Primer numero": n1:
    print "Operacion": oper:
    print "Segundo numero": n2
    print " ":
    print "Resultado:":
    print n1 oper n2 "=" resultado
return 0;
*/

#include<iostream>

using namespace std;

int main ()
{
    float num1 = 0;
    int   n1 = (int)num1;
    float num2 = 0;
    int n2 = (int)num2;
    float result = 0;
    char oper = '+';

    cout << "$" << " "<< "./" <<"Calculadora" <<endl <<endl;
    cout << "Este programa hace operaciones basicas entre dos numeros."<<endl;
    cout << "Primer numero:" << " ";
    cin >> num1; 
    cout << "Operacion:" << " ";
    cin >> oper;
    cout << "Segundo numero:" << " ";
    cin >> num2;
    cout << " " << endl << endl; 
    cout << "Resultado:" << endl;
    if(oper == '+')
        cout << num1 << " " << oper << " " << num2 << " " << "=" <<" " << num1 + num2 << endl;
    
    else if(oper == '-')
        cout << num1 << " " << oper << " " << num2 << " " << "=" <<" " << num1 - num2 << endl;
        
    else if(oper == '*')
        cout << num1 << " " << oper << " " << num2 << " " << "=" <<" " << num1 * num2 << endl;
        
    else if(oper == '/')
        cout << num1 << " " << oper << " " << num2 << " " << "=" <<" " << num1 / num2 << endl;
        
    else if(oper == '%')
        cout << num1 << " " << oper << " " << num2 << " " << "=" <<" " << (int)num1 % (int)num2 << endl;
        
    else
        cout << " operador no valido"<< endl;
        
    return 0;
    
}







/*#include<iostream>

using namespace std;

int main(){

    // we define our float variables, we make some type casting
    // beacause of the module oper
    float num1 = 0;
    int   n1 = (int)num1;
    float num2 = 0;
    int n2 = (int)num2;
    float resultado = 0;
    int r = (int) resultado;
    // we define our aitmethic operators
    char oper ='+';

    //the calculator may show this to the user
    cout << "Escriba la operacion a realizar bajo el formato a + b | a - b| a * b | a / b | a % b |"<<endl;
    cin >> num1 >> oper >> num2;

    cout << "$ ./ Calculadora"<<endl<<endl;
    cout << "Este programa hace operaciones basicas entre dos numeros."<<endl;
    cout << "Primer numero:" << " "<< num1<<endl; 
    cout << "Operacion:" << " " << oper<<endl;
    cout << "Segundo numero:" << " " <<num2<<endl<<endl;
    cout << "Resultado:"<<endl;
    cout << num1 <<" " << oper <<" " << num2<<" " << "=" <<" " << resultado <<endl;
    
        switch(oper) // to help calculator do the correct operation
    {
        case '+':
            resultado = num1 + num2;
        case '-':
            resultado = num1 - num2;
        case '*':
            resultado = num1 * num2;
        case '/':
            resultado = num1 / num2;
        case '%':
            resultado = n1 % n2;

    }
    return 0;
}*/