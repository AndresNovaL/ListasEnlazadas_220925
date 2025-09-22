#include <stdio.h> // Standard input - output.
#include <stdlib.h> // Manejo de punteros.

struct Node {
    int data; // 4 bytes
    struct Node* next;
};

struct Node* createNode(int data){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL){
        printf("Error: memoria no reservada");
        exit(1);
    }

    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void printList(struct Node* head){
    struct Node* temp = head;
    while (temp != NULL){
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

struct Node* createList(int n) {
    if (n <= 0) return NULL;

    struct Node* head = createNode(1); // Primer nodo con valor 1
    struct Node* current = head;

    for (int i = 2; i <= n; i++) {
        current->next = createNode(i); // Crea el siguiente nodo
        current = current->next;       // Avanza al nuevo nodo
    }

    return head;
}

int main() {
    struct Node* head = createList(1000000); // Crea 1000000 nodos con valores del 1 al 1000000

    printList(head); // Imprime la lista (puede ser muy larga)

    // Liberar memoria
    struct Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}