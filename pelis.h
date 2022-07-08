#include <cstdio>
#include "listaStruct.h"
#include <iostream>

bool vacia(Lista_peliculas lista);

int primero(Lista_peliculas lista);

int siguiente(int p, Lista_peliculas lista);

void ingresar(datoPelicula x, int p, Lista_peliculas &lista);

datoPelicula posicion(int p, Lista_peliculas lista);

void imprime_pelicula(Lista_peliculas lista);

void anula(Lista_peliculas &lista);

void suprime(int p, Lista_peliculas &lista);

void ingresar_peliculas(datoPelicula movie, int posicion, Lista_peliculas &pelicula);

int fin(Lista_peliculas peliculas);

