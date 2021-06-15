#include "logic.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void logic(int amount, int min, int max) 
{
    srand(time(0)*time(0)*800);

    int range = max - min + 1;

    if (amount <= range) 
    { 
        int i;
        for (i = 0; i < amount; ++i)
        {
            int num = min + rand() % (max+1 - min);
            printf("%d ", num);
        }
    } 
    else 
    {
        printf("Invalid input" "\n");
    }
}

