#include "logic.h"
#include <stdio.h>

int main() {
   int amount;
   int min;
   int max;

   printf("Amount of randomly generated numbers: ");
   scanf("%d", &amount);

   printf("Enter a minimum value: ");
   scanf("%d", &min);

   printf("Enter a maximum value: ");
   scanf("%d", &max);

   logic(amount, min, max);

   return 0;
}

