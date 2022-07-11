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
         << "[4] conseguir" <<'\n' << "[5]eliminar serie" << '\n';
    int opcion;
    cin >> opcion;
    cin.ignore();
    int id=0;
    int pos_u=1;
    int pos_p=1;
    int pos_s=1;

    while(opcion!=0) {

    if (opcion == 1) {
        usuario(cliente1, pos_u, id, clientes);
        imprime_usuario(clientes);
        cout<<"----------------------------------------\n";
        id++;
        pos_u++;
    }

    if (opcion == 2) {
        ingresar_peliculas(pelicula1, pos_p, peliculas);
        imprime_pelicula(peliculas);
        pos_p++;
        cout<<"----------------------------------------\n";
    }
    if (opcion == 3) {
        ingresar_serie(serie1, pos_s, series);
        imprime_serie(series);
        pos_s++;
        cout<<"----------------------------------------\n";
     }
    if(opcion==4){
        prestar(1, series);
        imprime_serie(series);

    }
    if(opcion==5){
        elimina(1,series);
        imprime_serie(series);

    }

    cout << "[1] ingresar usuario" << '\n' << "[2]ingresar pelicula:" << '\n' << "[3] ingresar serie" << '\n'
         << "[4] ordenar" << '\n';
    cin >> opcion;
    cin.ignore();



}


//-----------------------------------------------------------

}
