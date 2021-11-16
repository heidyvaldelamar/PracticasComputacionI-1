// Heidy Valdelamar & Sofía Palacios Cuevas
// Métodos de Groups

// Header
# include "Groups.h"

// Librerías
#include <string>
#include <array>

using namespace std;

// constructor
Groups::Groups(){ 
    name = " ";
    pkr = 0;
    charge = 0;
}

Groups::Groups(string GroupName, float GroupPka, int GroupCharge){
    name = GroupName;
    pkr = GroupPka;
    charge = GroupCharge;
}

// Crea un nuevo 'Grupo' con la información ingresada por el usuario
Groups CreateGroup(int i)
{
    string GroupName;
    float GroupPka;
    int GroupCharge;
    cout << "Nombre grupo " << i << ": ";
    cin >> GroupName;
    cout << "pK del grupo " << GroupName << ": ";
    cin >> GroupPka;
    cout << "Carga del grupo " << GroupName << " a pH mayor a " << GroupPka << ": ";
    cin >> GroupCharge;
    Groups myGroup(GroupName, GroupPka, GroupCharge);
    return myGroup;
}

// Regresa carga según su relación (<,>) con el pH
int Groups::GetCarga(){

  return charge;
}

// Regresa pkr
float Groups::GetPkr(){
  return pkr;
}