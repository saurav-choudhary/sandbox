#include <stdio.h>
int main()
{
    int value = 10;
    int *pValue = NULL; 
    pValue = &value;

    printf("Address of \"value\" var: %p\nAddress of pointer: %p\nValue of pointer: %p\nValue of what the pointer is pointing to: %d\n",&value, &pValue, pValue, *pValue);

    return 0;
}