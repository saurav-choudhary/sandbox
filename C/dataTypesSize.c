#include <stdio.h>
int main()
{
    printf("Size of char: %u byte.\n", sizeof(char));
    printf("Size of short: %u byte.\n", sizeof(short));
    printf("Size of int: %u bytes.\n", sizeof(int));
    printf("Size of long: %u bytes.\n", sizeof(long));
    printf("Size of long long: %u bytes.\n", sizeof(long long));
    printf("Size of float: %u bytes.\n", sizeof(float));
    printf("Size of double: %u bytes.\n", sizeof(double));
    printf("Size of long double: %u bytes.\n", sizeof(long double));
    
    return 0;
}