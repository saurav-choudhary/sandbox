/*
Write a C program that creates a structure pointer and passes it to a function
    create a structure named item with the following members
        itemName - pointer
        quantity - int
        price - float
        amount - float (stores quantity * price)

create a function named readItem that takes a structure pointer of type item as a parameter
    this function should read in (from the user) a product name, price, and quantity
    the contents read in should be stored in the passed in structure to the function

create a function named printItem that takes as a parameter a structure pointer of type item
    function prints the contents of the parameter

the main function should declare an item and a pointer to the item
    you will need to allocate memory for the itemName pointer
    the item pointer should be passed into both the read and print item functions
*/

#include <stdio.h>
#include <stdlib.h>

struct Item
{
    char *itemName;
    int qty;
    float price;
    float amount;
};

void readItem(struct Item *i);
void printItem(struct Item *i);

int main()
{
    struct Item _item;
    struct Item *p_item;

    p_item = &_item;

    p_item -> itemName = (char*)malloc(30*sizeof(char));
    
    if(p_item == NULL)
        exit(-1);

    // read item

    readItem(p_item);

    // print item

    printItem(p_item);

    free(p_item -> itemName);

    return 0;
}

void readItem(struct Item *i)
{
    printf("Enter product name: ");
    scanf("%s", i -> itemName);

    printf("Enter price: ");
    scanf("%f", &i -> price);

    printf("Enter quantity: ");
    scanf("%d", &i -> qty);

    i -> amount = (float)i -> qty * i -> price;
}

void printItem(struct Item *i)
{
    printf("\nName: %s", i -> itemName);
    printf("\nPrice %.2f", i -> price);
    printf("\nQuantity %d", i -> qty);
    printf("\nTotal Amount %.2f", i -> amount);
}