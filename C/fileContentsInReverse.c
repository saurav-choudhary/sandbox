#include <stdio.h>
#include <stdlib.h>

#define FILENAME "test.txt"

int main()
{
    FILE *fp = NULL;

    int count = 0;
    int i = 0;

    fp = fopen(FILENAME, "r");

    if (fp == NULL)
    {
        return -1;
    }

    fseek(fp, 0, SEEK_END);

    count = ftell(fp);
    printf("%d\n", count);

    while (i < count)
    {
        i++;
        fseek(fp, -i, SEEK_END);
        printf("%c", fgetc(fp));
    }

    printf("\n");
    fclose(fp);
    fp = NULL;
    
    return 0;
}