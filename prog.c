#include "stdio.h"
#include "fizzbuzz.h"

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
