#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>

// hash table uses a hash function to map linked list items into a table so they will be easy to find

// in order to deal with collisions in the hash table, there are 2 methods:
// open addressing and external chaining

#define MAX_NAME 256
#define TABLE_SIZE 10


// typedefing a struct to contain people's details and naming it "person"
typedef struct {
    char name[MAX_NAME];
    int age;
    /* other things may be added */
} person;


// the hash table itself is an array of pointers to people's structs
person *hash_table[TABLE_SIZE];          // (preson struct type) array of pointers



// creating the hash function
// simple function that sums the value of each letter
unsigned int hash(char *name) {
    int length = strnlen(name, MAX_NAME);
    unsigned int hash_value = 0;
    for (int i=0; i<length; i++) {
        hash_value += name[i];
        hash_value *= name[i];      // adding randomness
        hash_value %= TABLE_SIZE;   // making the hash value to fit in the table
    }
    return hash_value;
}


// initializing the hash table pointers with NULL
void init_hash_table() {
    for (int i=0; i<TABLE_SIZE; i++) {
        hash_table[i] = NULL;
    }
}

// making a print table function
// if the spot is empty (null), print i. if not empty. print the name
void print_table() {
    printf("start\n");
    for (int i=0; i<TABLE_SIZE; i++) {
        if (hash_table[i] == NULL) {
            printf("\t%i\t---\n", i);
        } else {
            printf("\t%i\t%s\n", i, hash_table[i]->name);
        }
    }
    printf("end\n\n");
}


// making a function to insert to the hash table
bool hash_table_insert(person *p) {
    // check if the pointer supplied is valid
    if (p== NULL) return false;     

    // create an index by the person's name
    int index = hash(p->name);

    // if index is taken, exit
    if (hash_table[index] != NULL) {
        return false;
    }
    // if not taken, set the index to the person's pointer and return true
    hash_table[index] = p;
    return true;
}


// find a person in the table by thier name
// notice there is no looping and searching through the array
// thus time complexity is O(1) - constant time operation.
person *hash_table_lookup (char *name){
    int index = hash(name);
    if (hash_table[index] != NULL &&
    strncmp(hash_table[index]->name, name, TABLE_SIZE)==0) {
        return hash_table[index];
    } else {
        return NULL;
    }
}


// making delete function
person *hash_table_delete (char *name){
    int index = hash(name);
    if (hash_table[index] != NULL &&
    strncmp(hash_table[index]->name, name, TABLE_SIZE)==0) {
        person *tmp = hash_table[index];    // save the pointer
        hash_table[index] = NULL;           // remove the pointer
        return tmp;                         // return the pointer for free() in case of dynamic mem alloc
    } else {
        return NULL;
    }
}



int main() {

    init_hash_table();
    print_table();

    person jacob = {.name="jacob", .age=123};
    person nir = {.name="nir", .age=44};
    person david = {.name="david", .age=55};
    person eli = {.name="eli", .age=15};
    person yafa = {.name="yafa", .age=77};
    person efrat = {.name="efrat", .age=77};
    person nemo = {.name="nemo", .age=77};
    person alphi = {.name="alphi", .age=77};
    person randomname = {.name="randomname", .age=77};

    hash_table_insert(&jacob);
    hash_table_insert(&david);
    hash_table_insert(&eli);
    hash_table_insert(&yafa);
    hash_table_insert(&efrat);
    hash_table_insert(&nemo);
    hash_table_insert(&alphi);
    hash_table_insert(&randomname);
    hash_table_insert(&nir);

    print_table();


    // checking if the name lookup works and the delete function
    person *tmp;
    // find nir
    tmp = hash_table_lookup("nir");
    if (tmp == NULL) {
        printf("not found\n");
    } else {
        printf("found %s, his age is %i\n", tmp->name, tmp->age);
    }
    // delete nir
    hash_table_delete("nir");
    // try find nir again
    tmp = hash_table_lookup("nir");
    if (tmp == NULL) {
        printf("not found\n");
    } else {
        printf("found %s, his age is %i\n", tmp->name, tmp->age);
    }




    /* printf("yahel => %u\n" , hash("yahel"));
    printf("miri => %u\n" , hash("miri"));
    printf("oded => %u\n" , hash("oded"));
    printf("ola => %u\n" , hash("ola"));
    printf("efi => %u\n" , hash("efi"));
    printf("mali => %u\n" , hash("mali")); */


    return 0;
}
