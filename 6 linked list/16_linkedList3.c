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
// linked list is created with functions to manipulate it.
// here is a function that creates new nodes on the heap.
// it takes a value, and returns a new node, initialized with that value, and a NULL next pointer.
node_t *create_new_node(int value) {
    node_t *new_node = malloc(sizeof(node_t));      // allocate space
    new_node -> value = value;
    new_node -> next = NULL;
    return new_node;
};

// inserting a node at the head
node_t *insert_at_head(node_t **head, node_t *node_to_insert) {
    node_to_insert -> next = *head;
    *head = node_to_insert;
    return node_to_insert;
}


// a find node function, takes the head and a lookup value
node_t *find_node(node_t *head, int value){
    node_t *tmp = head;
    while (tmp != NULL)
    {
        if (tmp->value == value) return tmp;
        tmp = tmp->next;
    }
    return NULL;  
};


// insert a new node after a given node
void insert_node_after (node_t *node_to_insert_after, node_t *new_node) {
    new_node->next = node_to_insert_after->next;
    node_to_insert_after->next = new_node;
}


int main() {

    node_t *head = NULL;
    node_t *tmp;

    for (int i=0; i<25; i++) {
        tmp = create_new_node(i);
        insert_at_head(&head, tmp);
    }

    // using the find function
    tmp = find_node(head, 13);
    printf("the node found is: %d\n", tmp->value);

    // inserting a node after a given node.
    // we will insert after the found node (13), a new created node (666)
    insert_node_after(tmp, create_new_node(666));

    printlist(head);

    return 0;
}