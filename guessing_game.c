#include <stdbool.h>
#include <stdio.h>

bool checkWinningConditions(int guess, int target)
{
   printf("you guessed: %d\n", guess);
   if (guess == target) {
      printf("you guessed correctly\n");
      return true;
   } 
   else
   {
      printf("not quite, try again\n");
      return false;
   }
}
