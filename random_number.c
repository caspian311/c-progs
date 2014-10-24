#include <stdlib.h>
#include <time.h>

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

