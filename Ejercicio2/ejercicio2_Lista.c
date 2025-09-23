#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Pelicula {
    char tituloPelicula[50];
    struct Pelicula* next;
};

struct Pelicula* crearPelicula(char* tituloPelicula) {
     struct Pelicula* nuevaPelicula = (struct Pelicula*) malloc(sizeof(struct Pelicula));
    if (nuevaPelicula == NULL) {
        printf("Error: memoria no reservada\n");
        exit(1);
    }
    strcpy(nuevaPelicula->tituloPelicula, tituloPelicula);
    nuevaPelicula->next = NULL;
    return nuevaPelicula;
}

void imprimirLista(struct Pelicula* head) {
    struct Pelicula* temp = head;
    while (temp != NULL) {
        printf("%s -> ", temp->tituloPelicula);
        temp = temp->next;
    }
    printf("NULL\n");
};

int main() {
    struct Pelicula* head = crearPelicula("Iron Man 1");
    struct Pelicula* first = crearPelicula("Captain America 1");
    struct Pelicula* second = crearPelicula("The Avengers");
    struct Pelicula* third = crearPelicula("Guardians of the Galaxy");
    struct Pelicula* fourth = crearPelicula("Doctor Strange 1");
    struct Pelicula* fifth = crearPelicula("Black Panther 1");
    struct Pelicula* sixth = crearPelicula("Avengers: Endgame");

    head->next = first;
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;


    imprimirLista(head);

    free(head);
    free(first);
    free(second);
    free(third);
    free(fourth);
    free(fifth);
    free(sixth);

    return 0;
};