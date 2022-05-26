/* Using pointer to an array as a parameter */
#include <stdio.h>

int array_sum (int *array, const int n)
{
    int sum = 0;
    int * const array_end = array + n;

    for (; array < array_end; ++array)
        sum += *array;
    
    return sum;
}

void main(void)
{
    int array_sum (int *array, const int n);
    int values[10] = {3, 7, 9, 8, 4, -3, 6, 7, 9, 0};

    printf("The sum is %i\n", array_sum(values, 10));
}

/* Using Array as a parameter

#include <stdio.h>

int array_sum (int array[], const int n)
{
    int sum = 0, *ptr;
    int * const array_end = array + n;

    for (ptr = array; ptr < array_end; ++ptr)
        sum += *ptr;

    return sum;
}

void main (void)
{
    int array_sum (int array[], const int n);
    int values[10] = {3, 7, 9, 8, 6, -1, 11, 5, -1, 2};

    printf("The sum is %i\n", array_sum(values, 10));

}

*/