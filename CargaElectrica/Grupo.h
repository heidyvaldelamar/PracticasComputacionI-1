/*
author: SOFIA PALACIOS CUEVAS
  date: NOV 01 2021
*/

// Clase 'Grupo'

#ifndef GRUPO_H
#define GRUPO_H

# include <string>
# include <array>
# include <iostream>
# include <iomanip>
using namespace std;


class Grupo{
    public:
    Grupo();
    float GetCarga();
    string GetNombreGrupo();
    ;

    private:
    int main(){
      Grupo miGrupo;
    return 0;
    }
    string nombreGrupo;
    float pkGrupo, pH;
    int cargaGrupo, cargaMolecula;
    

};

#endif
