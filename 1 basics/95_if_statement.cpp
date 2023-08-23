#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int num = 666;
    printf("\nnum = %d", num);

    // variables can be set inside the if statement condition
    // here num is reassigend to 0, then it is compared to 0, which evaluates to true (1)
    if ((num = 0) == 0)
    {
        printf("\n\nnum inside = %d", num);
    }
    else
    {
        printf("else");
    }

    printf("\nnum outside = %d\n", num);

    // a classic example of logic faliure due to operator precedence
    // here the comparision have higher precedence than the assignment, so first 0 is compared to 0
    // this comparision is evaluated to true (1), which is assigend to num
    if (num = 0 == 0)
    {
        printf("\nnum = %d\n\n", num);
    }
    else
    {
        printf("else");
    }

    return 0;
}