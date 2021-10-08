/*
*/

#include<iostream>
#include<array>

using namespace std;

int main(){
    const long int n= 999999999; //long quita la restricción de 32
    array<int, n> A{0};
    
    for (int i= 0; i < n; i++){
        A[i]=i;
        cout <<A[i] <<endl;
    }

    return 0;
}