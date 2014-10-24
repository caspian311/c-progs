#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

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

