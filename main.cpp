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
int pos_u = 1;
int pos_p = 1;
int pos_s = 1;
int *p = new int;

int main() {
    datoUsuario cliente1;
    datoPelicula pelicula1;
    datoSerie serie1;
//-----------------------------------------------------------

    int *opcion = new int;
    int id = 0;

    while (*opcion != 0) {
        menu_uno();
        cin >> *opcion;

        if (*opcion == 1) {
            usuario(cliente1, pos_u, id, clientes);
            imprime_usuario(clientes);
            cout << "----------------------------------------\n";
            id++;
            pos_u++;
        }

        if (*opcion == 2) {
            menu_dos();
            cin >> *opcion;
            if (*opcion == 1) {
                ingresar_serie(serie1, pos_s, series);
                pos_s++;
                cout << "----------------------------------------\n";
                continue;

            }
            if (*opcion == 2) {
                imprime_serie(series);
                cout << "que serie desea eliminar?" << '\n';
                cin >> *p;
                elimina(*p, series);
                continue;

            }
            if (*opcion == 3) {
                ingresar_peliculas(pelicula1, pos_p, peliculas);
                pos_p++;
                cout << "----------------------------------------\n";
                continue;
            }
            if (*opcion == 4) {
                imprime_pelicula(peliculas);
                cout << "que pelicula desea eliminar?" << '\n';
                cin >> *p;
                elimina(*p, peliculas);
                continue;

            }

        }
        if (*opcion == 3) {
            menu_tres();
            cin >> *opcion;
            if (*opcion == 1) {
                imprime_serie(series);
                cout << "desea reproducir alguna serie?" << '\n';
                cout << "[1] Si" << '\n' << "[2] No" << '\n';
                cin >> *opcion;
                if (*opcion == 1) {
                    cout << "ingrese el numero de la serie: ";
                    cin >> *p;
                    reproducir(*p, series);
                    imprime_nombre(*p,series);
                } else continue;
            }
            if (*opcion == 2) {
                imprime_pelicula(peliculas);
                cout << "desea reproducir alguna pelicula?" << '\n';
                cout << "[1] Si" << '\n' << "[2] No" << '\n';
                cin >> *opcion;
                if (*opcion == 1) {
                    cout << "ingrese el numero de la pelicula: ";
                    cin >> *p;
                    reproducir(*p, peliculas);
                    imprime_nombre(*p,peliculas);
                } else continue;

            }

        }
    }
    delete p;
}
