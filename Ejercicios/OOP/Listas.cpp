/*
author:
e-mail:
  date:
*/

#include<iostream>

struct list{
    int actual;
    int *siguiente;
};

using namespace std;


int main(){
    list Nodo1;
    list Nodo2;
    list Nodo3;

    Nodo1.actual = 1;
    Nodo2.actual = 2;
    Nodo3.actual = 3;

    // Generamos una referencia al siguiente nodo.
    Nodo1.siguiente = &Nodo2.actual;
    Nodo2.siguiente = &Nodo3.actual;
    Nodo3.siguiente = &Nodo1.actual;


    return 0;
}