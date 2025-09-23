#include <stdio.h> // Standard input - output.
#include <stdlib.h> // Manejo de punteros.
#include <string.h> 

struct Producto {
    char nombreProducto [30];
    struct Producto* next;
};

struct Producto* crearProducto(char*nombreProducto) {
    struct Producto* nuevoProducto = (struct Producto*) malloc(sizeof(struct Producto));
    if (nuevoProducto == NULL) {
        printf("Error al reservar memoria\n");
        exit (1);
    }

    strcpy(nuevoProducto->nombreProducto, nombreProducto);
    nuevoProducto->next = NULL;
    return nuevoProducto;
}

void imprimirLista (struct Producto* head){
    struct Producto* actual = head;

    printf("Lista de compras:\n");

    while (actual != NULL) {
        printf("- %s\n", actual->nombreProducto);
        actual = actual->next;
    }
}

int main () {
    struct Producto* head = crearProducto("Aceite");
    struct Producto* first = crearProducto("Leche");
    struct Producto* second = crearProducto("Arroz");
    struct Producto* third = crearProducto("Azúcar");

    head->next = first;
    first->next = second;
    second->next = third;

    imprimirLista(head);
    
    // Liberamos la memoria de cada nodo
    free(head);
    free(first);
    free(second);
    free(third);

    return 0;
}
