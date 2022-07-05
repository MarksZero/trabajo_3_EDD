#ifndef LISTA_STRUCT_H
#define LISTA_STRUCT_H

#define tipoDato usuario
/* Estructuras*/
struct usuario {
    int id;
    char nombre[25];
    struct cliente *sgte;
};

/*
struct pelicula {
    char titulo[30];
    struct clientes *lista;
    struct pelicula *sgte;
};
struct serie {
    char titulo[30];
    int temporadas;
    int capitulos;
    struct clientes *lista;
    struct serie *sgte;
};
 */
//--------------------------------------------------------------------------------
struct nodo {
    tipoDato dato;
    struct nodo *next;

    nodo() {
        next = nullptr;
    }

    nodo(tipoDato x) {
        nodo();
        dato = x;
    }
};

struct Lista {
    struct nodo *primero;

    Lista() {
        primero = nullptr;
    }
};

#endif