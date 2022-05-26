#include <stdio.h>
int main()
{
    int minutesEntered = 0;
    double minutesInYears;
    double years;
    double days;

    printf("Enter minutes:");
    scanf("%d", &minutesEntered);

    minutesInYears = 60 * 24 * 365;

    years = (minutesEntered / minutesInYears);
    days = (minutesEntered / 60) / 24;

    printf("%d minutes is approx. %f years and %f days\n", minutesEntered, years, days);
    
    return 0;
}