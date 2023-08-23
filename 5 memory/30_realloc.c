#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int size = 0;
    printf("Enter size\n");
    scanf("%d", &size);
    int *a = malloc(sizeof(int) * size);
    for (int i = 0; i < size; i++)
    {
        a[i] = size - i;
    }
    for (int i = 0; i < size; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }

    printf("address of a before realloc: 0x%p\n", a);

    // realloc re-allocated memory space on the heap during runtime, it takes a pointer address and a new size
    // and outputs a new pointer address
    a = realloc(a, sizeof(int) * (size + 5));

    printf("address of a after realloc:  0x%p\n", a);
    printf("realloc does not changes the memory base address, it re-allocates size to it");
    

    free(a);

    return 0;
}