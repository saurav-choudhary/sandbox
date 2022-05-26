#include <stdio.h>
int main()
{
    long value = 9999L;
    // const long *pvalue = &value;
    long *const pvalue = &value;

    //*pvalue = 4562L;

    // int temp = 24;
    // pvalue = &temp;

    printf("%ld", *pvalue);
    
    return 0;
}