#ifndef LISTA_STRUCT_H
#define LISTA_STRUCT_H

#define datoUsuario struct usuario
#define datoPelicula struct pelicula
#define datoSerie struct serie

/* Estructuras*/
struct usuario {
    int id;
    char nombre[25];
    struct cliente *sgte;
};
struct pelicula {
    char titulo[30];
    int reproducciones; //se añade para facilitar el numero de reproducciones que tenga, para evitar borarrla si tiene mas de 5
    bool disponible; //para verificar si es posible prestar o no
    struct clientes *lista;
    struct pelicula *sgte;
};
struct serie {
    char titulo[30];
    int temporadas;
    int capitulos;
    int reproducciones; //se añade para facilitar el numero de reproducciones que tenga, para evitar borarrla si tiene mas de 5
    bool disponible; //para verificar si es posible prestar o no
    struct clientes *lista;
    struct serie *sgte;
};
//------------STUCT-PARA-USUARIOS----------------------------------------------------
struct nodo1 {
    datoUsuario dato;
    struct nodo1 *next;

    nodo1() {
        next = nullptr;
    }

    nodo1(datoUsuario x) {
        nodo1();
        dato = x;
    }
};

struct Lista_cliente {
    struct nodo1 *primero;

    Lista_cliente() {
        primero = nullptr;
    }
};
//------------STUCT-PARA-PELICULAS---------------------------------------------------
struct nodo2 {
    datoPelicula dato;
    struct nodo2 *next;

    nodo2() {
        next = nullptr;
    }

    nodo2(datoPelicula x) {
        nodo2();
        dato = x;
    }
};

struct Lista_peliculas {
    struct nodo2 *primero;

    Lista_peliculas() {
        primero = nullptr;
    }
};
//------------STUCT-PARA-SERIES------------------------------------------------------
struct nodo3 {
    datoSerie dato;
    struct nodo3 *next;

    nodo3() {
        next = nullptr;
    }

    nodo3(datoSerie x) {
        nodo3();
        dato = x;
    }
};

struct Lista_series {
    struct nodo3 *primero;

    Lista_series() {
        primero = nullptr;
    }
};

#endif