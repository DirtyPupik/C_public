#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // calloc works similarly to malloc, main difference is that CALLOC ZEROS THE MEMORY BEFORE ALLOCATION
    // also the syntax is a bit different
    
    // calloc allocates block of memory on the heap, it returns an address
    int *a = calloc(10, sizeof(int));

    // the memory block can be access as an array
    for (int i = 0; i < 10; i++)
    {
        a[i] = 10 - i;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }

    printf("address of a:    0x%p\n", a);
    printf("address of a[0]: 0x%p\n", &a[0]);
    printf("address of a[1]: 0x%p\n", &a[1]);

    // the block must be freed after use to avoid memory leaks
    free(a);

    return 0;
}