/*
author: SOFIA PALACIOS CUEVAS
  date: NOV 01 2021
*/

// Clase 'Grupo'

#ifndef GRUPO_H
#define GRUPO_H

# include <string>

using namespace std;


class Grupo{
  private:
    string name; // nombre de nuestro grupo
    float pkr; // potenciales de los radicales
    int charge; // carga del radical   

  public:
    Grupo(string, float, int); // constructor con parámetros
    Grupo(); // constructor

    int GetCarga(); // recuperar la carga
    float GetPkr(); // obtener el pk de los radicales
    
  ;  

};

#endif
