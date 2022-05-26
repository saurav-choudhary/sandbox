#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct date
    {
        int day;
        int month;
        int year;
    };

/* pointer as a member of structure */
struct intPtrs
{
    int *p1;
    int *p2;
};

/* pointers to characters */

struct names
{
    char first[20];
    char last[20];
};

struct pnames
{
    char *first;
    char *last;
};

/* dynamically allocate memory to pointers to structres */

struct namect
{
    char *fname;
    char *lname;

    int letters;
};



int main()
{
    struct date today, *datePtr;

    datePtr = &today;

    datePtr -> day = 1;
    datePtr -> month = 1;
    datePtr -> year = 2022;

    printf("Today's date is %d/%d/%d\n", datePtr -> day, datePtr -> month, datePtr -> year % 100);

    struct intPtrs pointers;
    int i1 = 100, i2;

    pointers.p1 = &i1;
    pointers.p2 = &i2;

    *pointers.p2 = -97;

    printf("i1 = %d, *pointers.p1 = %d\n", i1,*pointers.p1);
    printf("i2 = %d, *pointers.p2 = %d\n", i2,*pointers.p2);

    struct names veep = {"Batman", "Bruce"};
    struct pnames treas = {"Robin", "Dick"};

    printf("%s and %s\n", veep.first, treas.first);

    return 0;
}

void getinfo (struct namect *pst)
{
    const int SLEN = 20;
    char temp[SLEN];
    printf("Please enter your first name.\n");
    s_gets(temp, SLEN);

    //allocating memory to hold name

    pst -> fname = (char*)malloc(strlen(temp) + 1);

    //copy name to allocate memory

    strcpy(pst -> fname, temp);
    printf("Please enter your last name.\n");
    s_gets(temp, SLEN);
    pst -> lname = (char*)malloc(strlen(temp) + 1);
    strcpy(pst->lname, temp);

}