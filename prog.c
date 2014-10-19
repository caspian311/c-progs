#include "stdio.h"
#include "fizzbuzz.h"

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

int main()
{
   printf("The fizz buzz list:\n");

   for (int i=1; i<=20; i++) 
   {
      char str[9];
      fizzbuzzify(str, i);
      printf("%s\n", str);
   }

   return 0;
}
