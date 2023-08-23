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

// in real life, things are done differently
// here is a function that creates new nodes on the heap.
// it takes a value, and returns a new node, initialized with that value, and a NULL next pointer.
node_t* create_new_node(int value) {
    node_t *new_node = malloc(sizeof(node_t));      // allocate space
    new_node -> value = value;
    new_node -> next = NULL;
    return new_node;
};


int main() {
    node_t *head;
    node_t *tmp;

    // one way is to manually create the list.
    // notice the repititation: 
    // first time only defining "head"
    tmp = create_new_node(420);
    head = tmp;

    // all the other times - setting the head as the
    tmp = create_new_node(69);
    tmp -> next = head;
    head = tmp;
    
    tmp = create_new_node(666);
    tmp -> next = head;
    head = tmp;

    printlist(head);

    return 0;
}