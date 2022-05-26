/* C program to count number of lines in a text file */

#include <stdio.h>
int main()
{
    int count = 0;

    FILE *pFile = NULL;
    char *fileName = "test.txt";

    pFile = fopen(fileName, "r");

    if (pFile == NULL)
    {
        perror("");
        return -1;
    }

    char ch;

    while ((ch = fgetc(pFile)) != EOF)
    {
        if (ch == '\n')
            count++;
    }

    fclose(pFile);
    pFile == NULL;

    printf("%d", count);

    return 0;
}