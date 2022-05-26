#include <stdio.h>
int main()
{
    int arr[100] = {1,3,5,7,9};

    int *valuesPtr = NULL;

    valuesPtr = arr;

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", *(valuesPtr + i));
    }

    return 0;
}