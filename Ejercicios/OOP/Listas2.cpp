/*
*/

#include <iostream>
#include <array>
using namespace std;

struct list{
    int actual;
    int *siguiente;
};

int main(){
    array<list, 10> A;
    
    for(int i = 0; i < A.size() - 1; i += 2){ // vamos a incrementar 2 elementos
        A[i].actual = i;
        A[i + 1].actual = i + 1;
        A[i].siguiente = &A[i + 1].actual;

        cout << *A[i].siguiente << endl;
    }
    return 0;
}