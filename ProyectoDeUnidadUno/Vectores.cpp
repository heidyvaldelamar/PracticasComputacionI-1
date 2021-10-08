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
    imprimirVector(B);
    B.push_back(2);
    imprimirVector(B);

    const int long n = 999999999;
    for(int i=0; i < n; i++){
        B.push_back(i);
    }

    return 0;
}

void imprimirVector(vector<int>B){ // completar
    for(int i=0;i <B.size(); i++){
        cout<<B[i]<<endl;
    }
}