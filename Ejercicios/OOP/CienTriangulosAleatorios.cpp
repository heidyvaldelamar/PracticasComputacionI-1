/*
*/

#include <iostream>
#include <array>
#include <ctime>

using namespace std;

class Triangle {

    public:
        void run(){

            // Inicializar vértices
            initRandomVertex (V1);
            initRandomVertex (V2);
            initRandomVertex (V3);

        }
        double getArea(){
            double base = xmax - xmin;
            double altura = ymax - ymin;
            return (base * altura) / 2;
        }

        void initRandomVertex(array<int, 2> &V){
            V[0]=(rand() % 10) + 1; //Inicializar el eje x
            V[1]=(rand() % 10) + 1; //Inicializar el eje y
            // Obtener elementos mínimos y máximos por eje
            if(V[0] < xmin){
                xmin = V[0];
            }
            if(V[0]>xmax){
                xmax = V[0];
            }
            if(V[1] < ymin){
                ymin = V[1];
            }
            if(V[1]> ymax){
                ymax = V[1];
            }
        }

    private:
        array <int, 2> V1 {0}; // Vérice con dos elementos x,y
        array <int, 2> V2 {0};
        array <int, 2> V3 {0};
        int xmin = 999999, xmax = -999999, ymin = 999999, ymax =-999999;


};

int main (){
    srand((int) time (0)); // inicializar la semilla
    
    array <Triangle, 100> T;

    int maxT{0}, minT{0};
    double minArea = 999999;
    double maxArea = 999999;

    for (int i = 0; i < 100; i++){
        T[i].run();
        double area = T[i].getArea();

        // Triángulo más pequeño
        if(area < minArea){
            minArea = area;
            minT = i + 1;
        }
        if (area > maxArea){
            maxArea = area;
            maxT = i + 1;
        }
    }

    cout << "El triangulo mas chico es: " << minT << " y tiene un area de: "<< minArea <<endl;
    cout << "El tiriangulo mas grande es: " << maxT << " y tiene un area de: "<< maxArea <<endl;   
    return 0;
}