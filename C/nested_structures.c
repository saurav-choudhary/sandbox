#include <stdio.h>
void main()
{
    struct date
    {
        int day;
        int month;
        int year;
    };

    struct time
    {
        int hours;
        int minutes;
        int seconds;
    };
    
    
    struct date_and_time
    {
        struct date s_date;

        struct time s_time;
    };

    struct date_and_time event = {{1, 2, 2015}, {3, 30, 0}};

    event.s_date.month = 10;
    ++event.s_time.seconds;

    struct date_and_time birthday = {
        {.day = 10, .month = 5, .year = 2000}, 
        {.hours = 19, .minutes = 50, .seconds = 0}};

    printf("%d/%d/%d\n\n", birthday.s_date.day, birthday.s_date.month, birthday.s_date.year);
    printf("Event Date: %d/%d/%d\n", event.s_date.day, event.s_date.month, event.s_date.year);
    printf("& Time: %d/%d/%d\n\n", event.s_time.hours, event.s_time.minutes, event.s_time.seconds);


    /* array of nested structures */

    struct date_and_time events[10];

    events[0].s_time.hours = 2;
    events[0].s_time.minutes = 3;
    events[0].s_time.seconds = 22;

    events[0].s_date.day = 2;
    events[0].s_date.month = 10;
    events[0].s_date.year = 18;

    printf("Second Event Date: %d/%d/%d\n", events[0].s_date.day, events[0].s_date.month, events[0].s_date.year);
    printf("& Time: %d/%d/%d", events[0].s_time.hours, events[0].s_time.minutes, events[0].s_time.seconds);

    /*declaring a structure withing a structure */

    struct Time
    {
        struct Date
        {
            int day;
            int month;
            int year;
        } dob;

        int hours;
        int minutes;
        int seconds;   
    };
    
}