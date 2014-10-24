#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "user_input.h"
#include "random_number.h"
#include "guessing_game.h"

int main() 
{
   int target = choose_random_number();
   bool userGuessedTarget = false;
   while(!userGuessedTarget) 
   {
      int guess = get_guess_from_user();
      if (validateGuess(guess))
      {
         userGuessedTarget = checkWinningConditions(guess, target);
      }
   }

   printf("Thanks for playing!\n");

   return 0;
}
