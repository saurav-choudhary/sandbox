#include <stdio.h>

enum Company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};

int main()
{
    enum Company xyz, abc, def;
    
    xyz = XEROX;
    abc = GOOGLE;
    def = EBAY;

    printf("%d\n%d\n%d", xyz, abc, def);
    return 0;
}