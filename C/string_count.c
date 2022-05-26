#include <stdio.h>
#include <string.h>

int string_length(const char *string)
{
    const char *last_address = string; //first address
    
    while (*last_address)
        ++last_address;

    return last_address - string; //last address - first address
}

int main()
{
    const char text[] = "saurav";

    const char *pText = text;

    printf("%d\n", string_length("Hey"));
    printf("%d", string_length(pText));

    return 0;
}