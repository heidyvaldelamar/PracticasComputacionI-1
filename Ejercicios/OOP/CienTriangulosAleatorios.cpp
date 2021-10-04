/*
*/

#include <iostream>
#include <array>
#include <ctime>

class Triangle {

    public:
        void run(){

            // Inicializar vértices
            initRandomVertex (V1);
            initRandomVertex (V2);
            initRandomVertex (V3;

        }
        void initRandomVertex(array<int, 2> &V){
            V[0]=(rand() % 10) + 1; //Inicializar el eje x
            V[1]=(rand() % 10) + 1; //Inicializar el eje y
        }

    private:
        array<int, 2> V1 {0};
        array<int, 2> V2 {0};
        array<int, 2> v3 {0};


};

int main (){
    srand((int) time (0)); // inicializar la semilla
    Triangle t1;
    t1.run();
    
    return 0;
}