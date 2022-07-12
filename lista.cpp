#include "lista.h"
#include <cstdio>
#include <iostream>
#include <vector>
#include <cstring>


using namespace std;

/*
opciones:
    -crear*
    -imprimir usuarios*
    -eliminar*
*/

void usuario(datoUsuario cliente, int posicion, int id, Lista_cliente &usuario) {//funcion para solicitar datos de clientes creados en un struct
    cout << "ingrese los datos de clientes \n";
    char *nombre = new char[20];
    cout << "nombre: ";
    cin.ignore();
    cin.getline(nombre, 20);//en vista que el cin solo corta la cadena al ver un espacio cambio a cin.getline
    cliente.id = id;
    strcpy(cliente.nombre, nombre);
    inserta(cliente, posicion, usuario);
}

void inserta(datoUsuario x, int p, Lista_cliente &lista) {
    nodo1 *nuevo = new nodo1(x);
    nodo1 *aux = lista.primero;
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

datoUsuario posicion(int p, Lista_cliente lista) {
    nodo1 *aux = lista.primero;
    for (int i = 1; i < p; i++)
        aux = aux->next;
    return aux->dato;
}

void imprime_usuario(Lista_cliente lista) {
    for (int i = primero(lista); i < fin(lista); i = siguiente(i, lista)) {
        datoUsuario dato = posicion(i, lista);
        cout << "[" << i << "]" << "-> " << "nombre: " << dato.nombre << " " << "id: " << dato.id << "\n";
    }
    printf("\n");
}

void anula(Lista_cliente &lista) {
    while (!vacia(lista))
        suprime(primero(lista), lista);
}

void suprime(int p, Lista_cliente &lista) {
    nodo1 *aux = lista.primero;
    if (primero(lista) == p)
        lista.primero = aux->next;
    else {
        nodo1 *aux2 = lista.primero;
        for (int i = 0; i < p - 2; i++)
            aux2 = aux2->next;
        aux = aux2->next;
        aux2->next = aux->next;
    }
    aux->next = nullptr;
    delete aux;
}

bool vacia(Lista_cliente lista) {
    return fin(lista) == primero(lista);
}

int primero(Lista_cliente lista) {
    return 1;
}

int fin(Lista_cliente lista) {
    int c = 1;
    nodo1 *aux = lista.primero;
    while (aux != nullptr) {
        aux = aux->next;
        c++;
    }
    return c;
}

int siguiente(int p, Lista_cliente lista) {
    return p + 1;
}

void menu_uno() {
    cout << "ingrese su opcion: " << '\n';
    cout << "[1] ingresar usuario" << '\n';
    cout << "[2] Administrar contenido: " << '\n';
    cout << "[3] Buscar y reproducir" << '\n';
}

void menu_dos() {
    cout << "ingrese su opcion: " << '\n';
    cout << "[1] Ingresar serie" << '\n';
    cout << "[2] Eliminar serie: " << '\n';
    cout << "[3] Ingresar pelicula" << '\n';
    cout << "[4] Eliminar pelicula" << '\n';
}

void menu_tres(){
    cout << "[1] Buscar serie" << '\n';
    cout << "[2] Buscar pelicula" << '\n';

}







