#include <iostream>
#include "lista.h"
#include "pelis.h"
#include "series.h"


//-------------------------------------------------------------------------------
Lista_cliente clientes;
Lista_series series;
Lista_peliculas peliculas;

using namespace std;
//-------------------------------------------------------------------------------


int main() {
    datoUsuario cliente1;
    datoPelicula pelicula1;
    datoSerie serie1;
//-----------------------------------------------------------
    cout << "ingrese su opcion: "<< '\n';
    cout << "[1] ingresar usuario" << '\n' << "[2]ingresar pelicula:" << '\n' << "[3] ingresar serie" << '\n' << "[4] salir" << '\n';
    int opcion;
    cin >> opcion;
switch (opcion) {
    case 1:
        usuario(cliente1, 1, clientes);
        imprime_usuario(clientes);
    case 2:
        ingresar_peliculas(pelicula1, 1, peliculas);
        imprime_pelicula(peliculas);
    case 3:
        ingresar_serie(serie1, 1, series);
        imprime_serie(series);
    case 4:
        break;

        }


//-----------------------------------------------------------

}
