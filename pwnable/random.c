#include <stdio.h>
#include <stdlib.h>

int main()
{

    unsigned int random;

    srand(54555555);
    random = rand();

    printf("\n%x", random);

    return 0;
}