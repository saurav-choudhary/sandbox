#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    time_t t;
    srand((unsigned)time(&t));
    int randomNumber = rand () % 21;

    printf("This is a guessing game.\n");
    printf("I have chosen a number between 0 and 20 which you must guess.\n");

    int guess, tries;
    tries = 5;

    while (tries >= 0)
    {
        printf("Enter a guess:");
        scanf("%d", &guess);

        if (guess >= 0 && guess <= 20)
        {
            if (guess > randomNumber)
            {
                printf("Sorry, %d is wrong. My number is less than that.\n", guess);
                --tries;
            }
            else if (guess < randomNumber)
            {
                printf("Sorry, %d is wrong. My number is more than that.\n", guess);
                --tries;
            }
            else if (guess == randomNumber)
            {
                printf("\nCongratulations. You guessed it !!\n");
                break;
            }
        }
        else
        {
            printf("Please enter a valid number. \n");
            continue;
        }
        if (tries == 0)
        {
            printf("\nYou ran out of tries, better luck next time.\n");
            break;
        }
    }
}