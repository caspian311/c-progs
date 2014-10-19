#include <stdbool.h>
#include "stdio.h"

bool is_divisible_by(int divisor, int i)
{
   return i % divisor == 0;
}

bool is_fizzbuzz(int i)
{
   return is_divisible_by(15, i);
}

bool is_fizz(int i)
{
   return is_divisible_by(3, i);
}

bool is_buzz(int i)
{
   return is_divisible_by(5, i);
}

void fizzbuzzify(char *str, int i)
{
      if (is_fizzbuzz(i)) {
            sprintf(str, "fizzbuzz");
      }
      else
      {
         if (is_fizz(i))
         {
            sprintf(str, "fizz");
         }
         else if (is_buzz(i))
         {
            sprintf(str, "buzz");
         }
         else
         {
            sprintf(str, "%d", i);
         }
      }
}

