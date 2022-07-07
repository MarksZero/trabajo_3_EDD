#ifndef LISTA_STRUCT_H
#define LISTA_STRUCT_H

#define tipoDato struct usuario
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
struct nodo1 {
    tipoDato dato;
    struct nodo1 *next;

    nodo1() {
        next = nullptr;
    }

    nodo1(tipoDato x) {
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

#endif