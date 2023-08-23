#include <stdio.h>

int main()
{
    // char is 1 byte signed integer by default
    // char cannot be declared with double quotes - double quotes insert a null character at the end
    char A = 65;
    printf("%c\n", A);
    printf("%i\n", A);

    // can be set as unsigned
    unsigned char x = 128;
    char x2 = 128;
    printf("%i\n", x);
    printf("%i", x2);

    return 0;
}