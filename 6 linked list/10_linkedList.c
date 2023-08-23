#include <stdlib.h>
#include <stdio.h>

struct node {       // each node in the list contains a value and an edge pointer
    int value;
    struct node* next;      // "next" is a struct node type poiter
};

typedef struct node node_t;     // a typedef for comfort

// making a function that prints the linked list
void printlist(node_t *head) {
    node_t *temporary = head;
    while (temporary != NULL) {
        printf("%d - ", temporary->value);
        temporary = temporary->next;
    };
    printf("\n");
}

int main() {
    node_t n1, n2, n3;
    node_t * head;

    n1.value = 45;
    n2.value = 8;
    n3.value = 3;

    // we will link the nodes as 3 -> 2 -> 1
    head = &n3;
    n3.next = &n2;
    n2.next = &n1;
    n1.next = NULL;

    // calling the print function
    printlist(head);

    return(0);
}