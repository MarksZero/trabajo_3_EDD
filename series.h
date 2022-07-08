#include <cstdio>
#include "listaStruct.h"
#include <iostream>

bool vacia(Lista_series lista);

int primero(Lista_series lista);

int siguiente(int p, Lista_series lista);

void ingresar(datoSerie x, int p, Lista_series &lista);

datoSerie posicion(int p, Lista_series lista);

void imprime_serie(Lista_series lista);

void anula(Lista_series &lista);

void suprime(int p, Lista_series &lista);

void ingresar_serie(datoSerie movie, int posicion, Lista_series &serie);

int fin(Lista_series series);