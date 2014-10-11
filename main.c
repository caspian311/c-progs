#include "list.h"

int main() 
{
   struct List *list = create_list();
   add_value(list, 1);
   add_value(list, 2);
   add_value(list, 3);

   remove_value(list, 2);

   print_list(list);
   free(list);

   return 0;
}

