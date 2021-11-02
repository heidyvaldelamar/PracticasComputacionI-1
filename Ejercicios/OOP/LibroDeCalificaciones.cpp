# include <array>
# include "LibroDeCalificaciones.h"
using namespace std;
int main(){
    const array<int, LibroDeCalificaciones::alumnos>calificaciones{
        100, 80, 90, 100, 85};
        string NombreDelCurso{"Computacion I"};
        LibroDeCalificaciones miLibroDeCalificaciones(NombreDelCurso, calificaciones);
        miLibroDeCalificaciones.mostrarMensaje();
        miLibroDeCalificaciones.procesarCalificaciones();
}