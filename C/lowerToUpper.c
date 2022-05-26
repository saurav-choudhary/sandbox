#include <stdio.h>
#include <ctype.h>

#define FILENAME "Test.txt"

int main()
{
    FILE *_FP = NULL;
    FILE *_FP1 = NULL;

    char ch = ' ';

    _FP = fopen(FILENAME, "r");

    if (_FP == NULL)
        return -1;

    _FP1 = fopen("temp.txt", "w");

    if (_FP1 == NULL)
        return -1;

    while ((ch = fgetc(_FP)) != EOF)
    {
        if (islower(ch))
        {
            ch = ch - 32;
        }

        fputc(ch, _FP1);
    }

    fclose(_FP);
    fclose(_FP1);

    rename("temp.txt", FILENAME);

    remove("temp.txt");

    _FP = fopen(FILENAME, "r");

    if (_FP == NULL)
    {
        return -1;
    }

    while ((ch = fgetc(_FP)) != EOF)
    {
        printf("%c", ch);
    }

    fclose(_FP);

    _FP = NULL;
    _FP1 = NULL;
    
    return 0;
}