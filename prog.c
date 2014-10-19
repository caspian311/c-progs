#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

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


int main() 
{
   printf("guess a number: ");

   int guess = get_guess_from_user();
   if (guess != -1)
   {
      printf("you guessed: %d\n", guess);
   }
   else
   {
      printf("That's not a real number.\n");
   }

   return 0;
}
