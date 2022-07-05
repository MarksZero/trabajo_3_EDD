#include "lista.h"
#include <cstdio>
#include <iostream>
#include <fstream>
#include <vector>
#include <string.h>

using namespace std;


void usuario() {      //funcion para solicitar datos de clientes creados en un struct
    struct usuario u;
    cout << "ingrese los datos de clientes \n";
    cout << "ingrese su id:  ";
    cin >> u.id;                //llenado de dato sin la necesidad de especificar formato
    cout << "ingrese su nombre:  ";
    cin >> u.nombre;
}

bool vacia(Lista lista) {
    return fin(lista) == primero(lista);
}

int primero(Lista lista) {
    return 1;
}

int fin(Lista lista) {
    int c = 1;
    nodo *aux = lista.primero;
    while (aux != nullptr) {
        aux = aux->next;
        c++;
    }
    return c;
}

int siguiente(int p, Lista lista) {
    return p + 1;
}

void ingresar(tipoDato x, int p, Lista &lista) {
    nodo *nuevo = new nodo(x);
    nodo *aux = lista.primero;
    if (primero(lista) == p) {
        nuevo->next = lista.primero;
        lista.primero = nuevo;
    } else {
        for (int i = 0; i < p - 2; i++)
            aux = aux->next;
        nuevo->next = aux->next;
        aux->next = nuevo;
    }
}

void imprime_lista(Lista lista) {
    for (int i = primero(lista); i < fin(lista); i = siguiente(i, lista)) {
        cout << nombre.u << "\n";
    }
    printf("\n");
}

void anula(Lista &lista) {
    while (!vacia(lista))
        suprime(primero(lista), lista);
}

int encontrar(const char *x, Lista lista) {

}


void suprime(int p, Lista &lista) {
    nodo *aux = lista.primero;
    if (primero(lista) == p)
        lista.primero = aux->next;
    else {
        nodo *aux2 = lista.primero;
        for (int i = 0; i < p - 2; i++)
            aux2 = aux2->next;
        aux = aux2->next;
        aux2->next = aux->next;
    }
    aux->next = nullptr;
    delete aux;
}




