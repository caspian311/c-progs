#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <time.h>

void remove_newline_from_input(char *guess)
{
   int i = strlen(guess) - 1;
   if (guess[i] == '\n')
   {
      guess[i] = '\0';
   }
}

bool is_integer(char *str)
{
   int current_pos = 0;
   int len = strlen(str);

   while(current_pos < len) 
   {
      char c = str[current_pos];
      if(!isdigit(c))
      {
         return false;
      }

      current_pos++;
   }

   return true;
}

int get_guess_from_user()
{
   printf("guess a number: ");
   char guess[3];
   fgets(guess, 3, stdin);

   remove_newline_from_input(guess);
   if (is_integer(guess))
   {
      return atoi(guess);
   }
   else
   {
      return -1;
   }
}

int random_number_between(int min, int max)
{
   time_t current_time = time(NULL);
   srand(current_time);
   int random_number = rand();
   return random_number % (max - min + 1) + min;
}

int choose_random_number()
{
   return random_number_between(1, 10);
}

bool validateGuess(int guess)
{
      if (guess != -1)
      {
         return true;
      }
      else
      {
         printf("That's not a real number.\n");
         return false;
      }
}

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
