#include <stdio.h>

//pass by value
void swap_by_value (int x, int y)
{
    int temp;

    temp = x;
    x = y;
    y = temp;

    return;
}

//pass by reference
void swap (int *x, int *y)
{
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;

    return;

}

int main()
{
    int a = 100;
    int b = 299;


    printf("Before swapping, a = %d & b = %d\n", a, b);

    swap (&a, &b);

    printf("After swapping, a = %d & b = %d\n", a, b);
    
    return 0;
}