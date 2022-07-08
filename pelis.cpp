#include "pelis.h"
#include <cstdio>
#include <iostream>
#include <vector>
#include <cstring>

using namespace std;


void ingresar_peliculas(datoPelicula movie, int posicion, Lista_peliculas &pelicula) {      //funcion para solicitar datos de clientes creados en un struct
    cout << "ingrese los datos de la pelicula \n";
    char titulo[30];
    cout<< "titulo:";
    cin.getline(titulo,30,'\n');     //en vista que el cin solo corta la cadena al ver un espacio cambio a cin.getline
    movie.reproducciones= 0;
    strcpy(movie.titulo,titulo);
    ingresar(movie,posicion,pelicula);

}


void ingresar(datoPelicula x, int p, Lista_peliculas &lista) {
    nodo2 *nuevo = new nodo2(x);
    nodo2 *aux = lista.primero;
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

datoPelicula posicion(int p, Lista_peliculas lista) {
    nodo2 *aux = lista.primero;
    for (int i = 1; i < p; i++)
        aux = aux->next;
    return aux->dato;
}

void imprime_pelicula(Lista_peliculas lista) {
    for (int i = primero(lista); i < fin(lista); i = siguiente(i, lista)) {
        datoPelicula dato = posicion(i, lista);
        cout <<"["<< i << "]"<< "-> "<< "titulo: " <<dato.titulo << " "<< "numero de reproducciones: " << dato.reproducciones << "\n";
    }
    printf("\n");
}

bool vacia(Lista_peliculas lista) {
    return fin(lista) == primero(lista);
}

int fin(Lista_peliculas peliculas) {
    int c = 1;
    nodo2 *aux = peliculas.primero;
    while (aux != nullptr) {
        aux = aux->next;
        c++;
    }
    return c;}

int primero(Lista_peliculas lista) {
    return 1;
}

int siguiente(int p, Lista_peliculas lista) {
    return p + 1;
}
void anula(Lista_peliculas &lista) {
    while (!vacia(lista))
        suprime(primero(lista), lista);
}

void suprime(int p, Lista_peliculas &lista) {
    nodo2 *aux = lista.primero;
    if (primero(lista) == p)
        lista.primero = aux->next;
    else {
        nodo2 *aux2 = lista.primero;
        for (int i = 0; i < p - 2; i++)
            aux2 = aux2->next;
        aux = aux2->next;
        aux2->next = aux->next;
    }
    aux->next = nullptr;
    delete aux;
}


