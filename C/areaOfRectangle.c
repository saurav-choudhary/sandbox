#include <stdio.h>
#include <stdlib.h>

int main()
{
    double length = 0.0L;
    double width = 0.0L;
    double area = 0.0L;
    double perimeter = 0.0L;

    printf("Enter length (cm) of the rectangle: ");
    scanf("%lf", &length);
    printf("Enter width (cm) of the rectangle: ");
    scanf("%lf", &width);

    area = length * width;
    perimeter = 2 * (length + width);

    printf("Area: %.2lf cm & Perimeter: %.2lf cm.", area, perimeter);

    return 0;
}