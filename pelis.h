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

void reproducir(int p, Lista_peliculas &lista);

int fin(Lista_peliculas peliculas);

void elimina(int p, Lista_peliculas &lista);

int buscar_nombre(char nombre[30], Lista_peliculas lista);

void imprime_nombre(int p, Lista_peliculas lista);

bool comparar(char nombre[30], Lista_peliculas series);
