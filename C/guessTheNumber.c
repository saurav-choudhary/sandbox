#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    time_t t;
    srand((unsigned) time (&t));
    int randomNumber = rand() % 21;

    printf("This is a guessing game.\n");
    printf("I've chosen a number between 0 and 20, which you must guess.\n");

    int guess, triesLeft;
    triesLeft = 5;

    while (triesLeft >= 0)
    {
        printf("Enter a guess: ");
        scanf("%d", &guess);

        if (guess >= 0 && guess <= 20)
        {
            if (guess > randomNumber)
            {
                printf("Sorry, %d is wrong. My number is less than that. \n", guess);
                --triesLeft;
            }

            else if (guess < randomNumber)
            {
                printf("Sorry, %d is wrong. My number is greater than that. \n", guess);
                --triesLeft;
            }

            else if (guess == randomNumber)
            {
                printf("\nCongratulations. You guessed it!\n");
                break;
            }
    
        }

        else
        {
            printf("I said the number is between 0 and 20.\n");
        }

        if (triesLeft == 0)
        {
            printf("\nYou have had five tries and failed. The number was %d\n.", randomNumber);
            break;
        }
        
    }

    return 0;
}