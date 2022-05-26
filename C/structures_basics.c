#include <stdio.h>

int main()
{
    struct date
    {
        int month;
        int day;
        int year;
    };
    
    // un-named structures

    struct
    {
        int day;
        int year;
        int month;

    } date2;
    
    // initializing structures

    date2.day = 12;
    date2.month = 05;

    struct date date1 = {7, 2, 2015};

    struct date date3 = {.month = 12, .day = 10};
    struct date date4 = {.year = 2021};


    struct date today;

    today.day = 31;
    today.month = 12;
    today.year = 2021;

    today = (struct date) {01, 01, 2022};
    
    printf("Today's date is %d/%d/%d.\n", today.day, today.month, today.year % 100);

    return 0;
}