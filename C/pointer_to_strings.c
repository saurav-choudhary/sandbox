#include <stdio.h>
#include <string.h>

/*
void copyString (char to[], char from[])
{
    int i = 0;

    for (; from[i] != '\0'; ++i)
        to[i] = from[i];

    to[i] = '\0';
}
*/

void copyString (char *to, char *from)
{
    while (*from)
        *to++ = *from++;
        
    *to = '\0';
}

int main(void)
{
    char string1[] = "A string to be copied.";
    char string2[50];

    copyString (string2, string1);
    printf("%s\n", string2);

    return 0;
}