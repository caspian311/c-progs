#include "stdio.h"
#include "fizzbuzz.h"

int main() 
{
   printf("The fizz buzz list:\n");

   for (int i=1; i<=20; i++) 
   {
      if (is_fizzbuzz(i)) {
            printf("fizzbuzz\n");
      }
      else
      {
         if (is_fizz(i))
         {
            printf("fizz\n");
         }
         else if (is_buzz(i))
         {
            printf("buzz\n");
         }
         else
         {
            printf("%d\n", i);
         }
      }
   }

   return 0;
}
