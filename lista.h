#include <cstdio>
#include "listaStruct.h"
#include <iostream>


/* Prototipos */
void usuario(datoUsuario cliente, int posicion, int id, Lista_cliente &usuario);

void inserta(datoUsuario x, int p, Lista_cliente &lista);

datoUsuario posicion(int p, Lista_cliente lista);

void imprime_usuario(Lista_cliente lista);

void anula(Lista_cliente &lista);

void suprime(int p, Lista_cliente &lista);

bool vacia(Lista_cliente lista);

int primero(Lista_cliente lista);

int fin(Lista_cliente lista);

int siguiente(int p, Lista_cliente lista);

//--------------------------------------
void menu_uno();

void menu_dos();

void menu_tres();


