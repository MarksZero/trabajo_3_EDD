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
    cout << "ingrese su opcion: " << '\n';
    cout << "[1] ingresar usuario" << '\n' << "[2]ingresar pelicula:" << '\n' << "[3] ingresar serie" << '\n'
         << "[4] salir" << '\n';
    int opcion;
    cin >> opcion;
    cin.ignore();

while(opcion!=4) {

    if (opcion == 1) {
        usuario(cliente1, 1, clientes);
        imprime_usuario(clientes);
    }

    if (opcion == 2) {
        ingresar_peliculas(pelicula1, 1, peliculas);
        imprime_pelicula(peliculas);
    }
    if (opcion == 3) {
        ingresar_serie(serie1, 1, series);
        imprime_serie(series);
    } else {
        cout << "ingrese su opcion: " << '\n';
        cout << "[1] ingresar usuario" << '\n' << "[2]ingresar pelicula:" << '\n' << "[3] ingresar serie" << '\n'
             << "[4] salir" << '\n';
        cin >> opcion;
    }
    cin >> opcion;

}


//-----------------------------------------------------------

}
