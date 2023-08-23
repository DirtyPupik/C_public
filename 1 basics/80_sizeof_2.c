#include <stdio.h>

int main() {

    printf("\nnote that the size of pointer is architecture depentend, i.e 4/8 bytes\n");
    // u - unsigned, z - length of size_t
    // %zu is used to correctly print size_t variables. size_t is the return type of sizeof()
    printf("sizeof(char)   = %zu bytes\n", sizeof(char));
    printf("sizeof(char *) = %zu bytes\n", sizeof(char *));
    printf("sizeof(int)    = %zu bytes\n", sizeof(int));
    printf("sizeof(int *)  = %zu bytes\n", sizeof(int *));
    printf("sizeof(long)   = %zu bytes\n", sizeof(long));
    printf("sizeof(long *) = %zu bytes\n", sizeof(long *));
    printf("sizeof(long long)   = %zu bytes\n", sizeof(long long ));
    printf("sizeof(long long *) = %zu bytes\n\n", sizeof(long long *));
    printf("sizeof(size_t) = %zu bytes\n\n", sizeof(size_t));

    return 0;
}
