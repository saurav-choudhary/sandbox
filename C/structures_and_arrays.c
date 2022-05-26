#include <stdio.h>

int main()
{
    struct date
    {
        int month;
        int day;
        int year;
    };
    
    struct date my_dates[10];

    my_dates[0].month = 10;
    my_dates[0].day = 5;
    my_dates[0].year = 2000;

    /* Initialization of an array containing structures is similar to initialization of multidimensional arrays 
        the inner pairs of braces are optional */
    
    struct date important_dates[5] = {{10, 10, 2011}, {12, 4, 2014}, {15, 5, 2008}};

    struct date whatever[5] = {[2] = {15, 6, 2018}};

    struct date holidays[5] = {[1].month = 12, [1].day = 30};

    struct month
    {
        int number_of_days;
        char name[3];
    };

    struct month a_month;
    a_month.number_of_days = 31;
    a_month.name[0] = 'J';
    a_month.name[1] = 'A';
    a_month.name[2] = 'N';

    struct month bMonth = {28, {'F', 'E', 'B'}};

    struct month months[12];

    return 0;
}