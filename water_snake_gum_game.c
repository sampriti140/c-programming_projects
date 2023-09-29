#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int i = 0, j = 0, k = 0, m = 0, n = 0,l=0;
         int number;
        char comp;
        char you;

int main()     
{
     printf("g for gun, w for water and s for snake\n");
    while (i < 5)
    {
       
        srand(time(0));
        number = (rand() % (100 - 1 + 1)) + 1;
        if (number < 33)
        {
            comp = 'w';
        }
        else if (number > 33 && number < 66)
        {
            comp = 'g';
        }
        else
        {
            comp = 's';
        }
        fflush(stdin);
        
        printf("Arka enter the charecter:\n");
        scanf("%c", &you);
        if (you == comp)
        {
            printf("this is tie\n");
        }

        if (you == 's' && comp == 'g')
        {
            printf("computer won\n");
            k++;
        }
        else if (you == 'g' && comp == 's')
        {
            printf("Arka won\n");
            j++;
        }

        if (you == 's' && comp == 'w')
        {
            printf("Arka won\n");
            j++;
        }
        else if (you == 'w' && comp == 's')
        {
            printf("computer won\n");
            k++;
        }

        if (you == 'g' && comp == 'w')
        {
            printf("computer won\n");
            k++;
        }
        else if (you == 'w' && comp == 'g')
        {
            printf("Arka won\n");
            j++;
        }
        i++;
    }
    printf("Arka won %d times\n", j);
    printf("Computer won %d times\n", k);
    if (j > k)
    {
        printf("Arka have won this match\n");
    }
    else if (j < k)
    {
        printf("Computer has won this match\n");
    }
    else
    {

        printf("This is a tie match\n");
    }
     printf("g for gun, w for water and s for snake\n");
    while (l < 5)
    {
        srand(time(0));
        number = (rand() % (100 - 1 + 1)) + 1;
        if (number < 33)
        {
            comp = 'w';
        }
        else if (number > 33 && number < 66)
        {
            comp = 'g';
        }
        else
        {
            comp = 's';
        }
        fflush(stdin);
       
        printf("Sampriti enter the charecter:\n");
        scanf("%c", &you);
        if (you == comp)
        {
            printf("this is tie\n");
        }

        if (you == 's' && comp == 'g')
        {
            printf("computer won\n");
            n++;
        }
        else if (you == 'g' && comp == 's')
        {
            printf("Sampriti won\n");
            m++;
        }

        if (you == 's' && comp == 'w')
        {
            printf("Sampriti won\n");
            m++;
        }
        else if (you == 'w' && comp == 's')
        {
            printf("computer won\n");
            n++;
        }

        if (you == 'g' && comp == 'w')
        {
            printf("computer won\n");
            n++;
        }
        else if (you == 'w' && comp == 'g')
        {
            printf("Sampriti won\n");
            m++;
        }
        l++;
    }
    printf("Sampriti won %d times\n", m);
    printf("Computer won %d times\n", n);
    if (m > n)
    {
        printf("Sampriti have won this match\n");
    }
    else if (m < n)
    {
        printf("Computer has won this match\n");
    }
    else
    {

        printf("This is a tie match\n");
    }
    if (m > j)
    {
        printf("Sampriti have won this match\n");
    }
    else if (m < j)
    {
        printf("Arka has won this match\n");
    }
    else
    {

        printf("This is a tie match\n");
    }

    return 0;
}