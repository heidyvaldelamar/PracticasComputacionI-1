# include <string>
# include <array>
# include <iostream>
# include <iomanip>

using namespace std;

class LibroDeCalificaciones{
    public:
    static const size_t students{5}; 

    LibroDeCalificaciones(const string& nombre,
        const array <int, alumnos>& ArregloCalificaciones)
        : NombreDelCurso{nombre}, calificaciones{ArregloCalificaciones}{

        }
    void setNombreDelCurso(const string& name){
        NombreDelCurso = nombre;
    }
    const string& getNombreDelCurso() const {
        return NombreDelCurso;
    }
    void mostrarMensaje() const{
        cout << "Bienvenido al libro de calificaciones de\n" << getNombreDelCurso()<<"!"<<endl;

    }
    void procesarCalificaciones()const{
        salidaCalificaciones();

        cout << setprecision(2) << fixed;
        cout <<"\nEl promedio de la clase es "<<getPromedio()<<endl;

        salidaGrafica();
    }
    double getPromedio() const{
        int total{0};

        for(int calificacion : calificaciones){
            total += calificaciones;
        }
        return static_cast<double>(total)/calificaciones.size();
    }
    void salidaGrafica() const{
        cout << "Distribución de las calificaciones: "<<endl;
        const size_t sizeFrecuencia{6};
        array<unsigned int, sizeFrecuencia> frecuencia{};
        for(int calificacion : calificaciones){
            ++frecuencia[calificacion/5];
        }
        for(size_t count{0}; count<sizeFrecuencia; ++count){
            if(0==count){
                cout<<" 0-4: ";
            }
            else if(5 == count){
                cout <<" 100: ";
            }
            else{
                cout<<count * 5 << "-" << (count * 5) + 4 <<" : ";
            }
            cout << endl;
        }
    }
    void salidaCalificaciones() const{
        cout <<"\nLas calificaciones son:\n\n";
        for(size_t alumnos{0}; alumnos < calificaciones.size();++alumnos){
            cout <<"Alumno "<< setw(2) << alumnos + 1 << " : " << setwd(3) <<calificaciones[alumnos]<<endl;
        }
    }
    private:
    string NombreDelCurso;
    array<int, alumnos> calificaciones;
};
