cmake_minimum_required(VERSION 3.20)
project(PracticasComputacionI_1)

set(CMAKE_CXX_STANDARD 14)

include_directories(Ejercicios/OOP)
include_directories(ProyectoDeUnidadUno)
include_directories(Puntos)

add_executable(PracticasComputacionI_1
        Arreglos/Arreglos.cpp
        Calculadora/Calculadora.cpp
        Ejercicios/OOP/CienTriangulosAleatorios.cpp
        Ejercicios/OOP/Triangulo.cpp
        Ejercicios/OOP/Triangulo.h
        Ejercicios/OOP/Triangulo_main.cpp
        Ejercicios/GJ.cpp
        Ejercicios/PlatillaDeFunciones.cpp
        GaussJordan/GaussJordan.cpp
        GaussJordan/tempCodeRunnerFile.cpp
        ProyectoDeUnidadUno/CalculadoraBioQuimica.cpp
        ProyectoDeUnidadUno/Calculate.cpp
        ProyectoDeUnidadUno/PH.h
        ProyectoDeUnidadUno/Vectores.cpp
        Puntos/Punto.cpp
        Puntos/Punto.h
        Puntos/Puntos.cpp
        tempCodeRunnerFile.cpp)
