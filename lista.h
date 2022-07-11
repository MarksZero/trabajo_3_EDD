#include <cstdio>
#include "listaStruct.h"
#include <iostream>


/* Prototipos */
bool vacia(Lista_cliente lista);

int primero(Lista_cliente lista);

void usuario(datoUsuario cliente, int posicion, int id, Lista_cliente &usuario);

int fin(Lista_cliente lista);

void usuario(datoUsuario cliente, int posicion, Lista_cliente &usuario);

int siguiente(int p, Lista_cliente lista);

void inserta(datoUsuario x, int p, Lista_cliente &lista);

void elimina(int p, Lista_series &lista);

void imprime_usuario(Lista_cliente lista);

void suprime(int p, Lista_cliente &lista);

void anula(Lista_cliente &lista);

void usuario();

void ordenar(Lista_cliente &lista);
//--------------------------------------
//void clientes(clientes *u)


