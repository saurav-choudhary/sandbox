#include <stdio.h>
#include <string.h>

int main(void)
{
    char multiple[] = "a string";
    char *p = multiple;

    for (int i = 0; i < strlen(multiple); ++i)
    {
        printf("multiple[%d] = %c *(p+%d) = %c &multiple[%d] = %p p+%d = %p\n", i, multiple[i], i, *(p+i), i, &multiple[i], i, p+i);
    }
    return 0;
}

/* Using long datatype as array elements

#include <stdio.h>

int main(void)
{
    long multiple[] = {15L, 25L, 35L, 45L};
    long *p = multiple;

    for (int i = 0; i < sizeof(multiple)/sizeof(multiple[0]); i++)
    {
        printf("address p+%d (&multiple[%d]): %llu *(p+%d) value: %d\n", i, i, (unsigned long long)(p+i), i, *(p+i));
    }
    
    printf("\nType long occupies: %d bytes\n", (int)sizeof(long));

    return 0;
}
*/