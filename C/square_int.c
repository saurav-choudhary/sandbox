#include <stdio.h>
#include <stdlib.h>

void square(int * const ptr)
{
    *ptr = (*ptr) * (*ptr);

    return;
}

int main()
{
    int *num = (int *)malloc(sizeof(int));
    *num = 4;

    square(num);

    printf("The Square of the given number is: %d\n", *num);

    return 0;
}