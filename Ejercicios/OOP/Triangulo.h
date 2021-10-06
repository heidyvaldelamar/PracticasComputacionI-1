/*
*/
#include <iostream>
#include <array>

using namespace std;

class Triangle {
    public:
        explicit Triangle();
        void run();
        double getArea();
        void initRandomVertex(array<int, 2> $V);


    private:
        array <int, 2> V1 {0};
        array <int, 2> V2 {0};
        array <int, 2> V3 {0};
};

