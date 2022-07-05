#include <iostream>
#include "lista.h"
// clientes
//pelicula
//serie
/*
 * • Manejar un menú con todas las opciones requeridas: Ingreso, Reproducción, Eliminación, Buscar
 *   Título.
 *• Implementar cada uno de los menús, utilizando el criterio elegido por ustedes.
 */

//-------------------------------------------------------------------------------
Lista clientes;
Lista pelicula;
Lista serie;
using namespace std;
//-------------------------------------------------------------------------------


int main() {

//-----------------------------------------------------------
    anula(clientes); //funcion que se encarga de eliminar los elementos de la lista
    anula(pelicula);
    anula(serie);
//-----------------------------------------------------------

    usuario();
}
