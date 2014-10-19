#include <stdbool.h>

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

