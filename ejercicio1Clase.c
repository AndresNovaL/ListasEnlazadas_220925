#include <stdio.h> // Standard input - output.
#include <stdlib.h> // Manejo de punteros.
#include <string.h> 

struct Producto {
    char nombreProducto [20];
    struct Producto* next;
};

struct Producto* crearProducto(char*nombreProducto) {
    struct Producto* new = (struct Producto*) malloc(sizeof(struct Producto));
    if (new == NULL) {
        printf("Error al reservar memoria\n");
        exit (1);
    }

    strcpy(new->nombreProducto, nombreProducto);
    new->next = NULL;
    return new;
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
    struct Producto* second = crearProducto("Leche");
    struct Producto* third = crearProducto("Arroz");

    head->next = second;
    second->next = third;

    imprimirLista(head);
    
    struct Producto* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}
