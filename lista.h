#include <cstdio>
#include "listaStruct.h"
#include <iostream>


/* Prototipos */
bool vacia(Lista_cliente lista);

int primero(Lista_cliente lista);

int fin(Lista_cliente lista);

void usuario(tipoDato cliente, int posicion, Lista_cliente &usuario);

int siguiente(int p, Lista_cliente lista);

void ingresar(tipoDato x, int p, Lista_cliente &lista);

void imprime_lista(Lista_cliente lista);

void suprime(int p, Lista_cliente &lista);

void anula(Lista_cliente &lista);

void usuario();
//--------------------------------------
//void clientes(clientes *u)


