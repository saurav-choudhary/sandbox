#include <stdio.h>
#include <stdbool.h>
#include <string.h>

struct Family
{
    char names[20];
    int age;
    char father_name[20];
    char mother_name[20];
};


bool siblings (struct Family *pmember1, struct Family *pmember2)
{
    if (strcmp(pmember1 -> mother_name, pmember2 -> mother_name) == 0)
        return true;
    
    else
        return false;

}

/* returning a structure from a function 

struct Date my_fun(void);

this  is a prototype for a function taking no arguments that returns a structure of type Date

it is often more convenient to return a pointer to a structure
    when returning a pointer to a structure, it should be created on the heap

*/

// Example:


struct funds {
    char bank[40];
    double bank_fund;
    char save[40];
    double save_fund;
};

double sum (struct funds moolah)
{
    return (moolah.bank_fund + moolah.save_fund);
}

int main()
{

    struct funds stan = {
        "Garlic-Melon Bank",
        45351.2,
        "Lucky's Savings and Loan",
        23242.9
    };

    printf("Stan has a total of $%.2f\n", sum(stan));

    return 0;
}