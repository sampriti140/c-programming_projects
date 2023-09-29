#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number;
    int you;
    int number1;
    int you1;
    int i = 0;
    int j = 0;
    srand(time(0));
    number = (rand() % (100 - 1 + 1)) + 1; // number= (rand()%(upper-lower+1))+lower
    do
    {
        // printf("Arka is playing the game first\n");

        printf(" Arka enter a number from 1-100\n");
        scanf("%d", &you);
        if (you > number)
        {
            printf("choose a smaller number.\n");
        }
        else if (you < number)
        {
            printf("choose a bigger number.\n");
        }
        else if (you == number)
        {
            printf("you choose it right!\n");
        }
        i++;
    } while (you != number);
    printf("Arka did it in %d choose\n", i);
    fflush(stdin);
    srand(time(0));
    number1 = (rand() % (100 - 1 + 1)) + 1; // number= (rand()%(upper-lower+1))+lower
    do
    {
        // printf("Now it's time for Sampriti\n");
        printf("Sampriti enter a number from 1-100\n");
        scanf("%d", &you1);
        if (you1 > number1)
        {
            printf("choose a smaller number.\n");
        }
        else if (you1 < number1)
        {
            printf("choose a bigger number.\n");
        }
        else if (you1 == number1)
        {
            printf("you choose it right!\n");
        }
        j++;
    } while (you1 != number1);
    printf("\n");
    printf("Sampriti did it in %d choose\n", j);
    if (i > j)
    {
        printf("Sampriti has won the match!\n");
    }
    else if (i < j)
    {
        printf("Arka has won the match!\n");
    }
    else
    {
        printf("It's a tie match\n ");
    }

    return 0;
}