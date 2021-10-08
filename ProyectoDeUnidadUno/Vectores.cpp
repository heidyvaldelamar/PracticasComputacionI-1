/*
*/

#include<iostream>
#include<array>
#include<vector>

using namespace std;

/* // Con arreglos -> dinamico
int main(){
    const long int n= 999999; //long quita la restricción de 32
    array<int, n> A{0};
    
    for (int i= 0; i < n; i++){
        A[i]=i;
        cout << A[i] <<endl;
    }

    return 0;
}
*/

/*/ con vectores, requiere librearia 'vector'
template<typename T>
void imprimirVector(vector<T> A);

int main(){
    vector <int>enteros1(7);
}
*/

int main(){
    vector<int> B(5); // vector vacio (falta metodo)
    cout << "El tamano de B es: " << B.size() <<endl;

    return 0;
}