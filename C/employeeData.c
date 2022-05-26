/*
Write a program that declares and prints out it's content
    create an employee structure with 3 members
        name (character array)
        hireDate (int)
        salary (float)

    declare and initialize an instance of an employee type
    read in a second employee from the console and store it in a structure of type employee
    print out the content of each employee

    */

#include <stdio.h>

struct Employee
{
    char name[20];
    char hireDate[15];
    float salary;
};


int main()
{
    struct Employee _01 = {"Bruce", "19/05/2021", 176000.55};

    struct Employee _02;
    
    printf("Employee _01's Name: %s, Hire date: %s, Salary: $%f\n\n", _01.name, _01.hireDate, _01.salary);

    printf("Enter employee information: \n");

    printf("Name: ");
    scanf("%s", _02.name);

    printf("Hire Date: ");
    scanf("%s", _02.hireDate);

    printf("Salary: ");
    scanf("%f", &_02.salary);

    printf("\nEmployee _02's Name: %s, Hire date: %s, Salary: $%f\n", _02.name, _02.hireDate, _02.salary);

    return 0;
}