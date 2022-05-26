#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n = 1;
    
    char *text = NULL;

    text = (char*)malloc(n*sizeof(char));
    // text = (char*)calloc(n, sizeof(char));

    if (text != NULL)
    {
        printf("Enter some text: ");
        gets(text);

        printf("You entered: ");
        puts(text);
    }

    free(text);

    return 0;
}