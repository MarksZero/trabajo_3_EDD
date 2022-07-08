#include "series.h"
#include <cstdio>
#include <iostream>
#include <vector>
#include <cstring>

using namespace std;


void ingresar_serie(datoSerie seri, int posicion, Lista_series &serie) {      //funcion para solicitar datos de clientes creados en un struct
    cout << "ingrese los datos de la pelicula \n";
    char titulo[30];
    cout << "titulo:";
    cin.getline(titulo,30,'\n');  //en vista que el cin solo corta la cadena al ver un espacio cambio a cin.getline
    int temporadas;
    cout << "temporadas:";
    cin >> temporadas;
    int capitulos;
    cout << "capitulos:";
    cin >> capitulos;
    seri.temporadas = temporadas;
    seri.capitulos = capitulos;
    seri.reproducciones = 0;
    strcpy(seri.titulo, titulo);
    ingresar(seri, posicion, serie);

}


void ingresar(datoSerie x, int p, Lista_series &lista) {
    nodo3 *nuevo = new nodo3(x);
    nodo3 *aux = lista.primero;
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

datoSerie posicion(int p, Lista_series lista) {
    nodo3 *aux = lista.primero;
    for (int i = 1; i < p; i++)
        aux = aux->next;
    return aux->dato;
}

void imprime_serie(Lista_series lista) {
    for (int i = primero(lista); i < fin(lista); i = siguiente(i, lista)) {
        datoSerie dato = posicion(i, lista);
        cout << "[" << i << "]" << "-> " << "titulo: " << dato.titulo << " temporadas: " << dato.temporadas <<
                " capitulos: " << dato.capitulos << " numero de reproducciones: " << dato.reproducciones << "\n";
    }
    printf("\n");
}

int primero(Lista_series lista) {
    return 1;
}

int fin(Lista_series series) {
    int c = 1;
    nodo3 *aux = series.primero;
    while (aux != nullptr) {
        aux = aux->next;
        c++;
    }
    return c;
}

bool vacia(Lista_series lista) {
    return fin(lista) == primero(lista);
}

int siguiente(int p, Lista_series lista) {
    return p + 1;
}


void suprime(int p, Lista_series &lista) {
    nodo3 *aux = lista.primero;
    if (primero(lista) == p)
        lista.primero = aux->next;
    else {
        nodo3 *aux2 = lista.primero;
        for (int i = 0; i < p - 2; i++)
            aux2 = aux2->next;
        aux = aux2->next;
        aux2->next = aux->next;
    }
    aux->next = nullptr;
    delete aux;
}

void anula(Lista_series &lista) {
    while (!vacia(lista))
        suprime(primero(lista), lista);
}


