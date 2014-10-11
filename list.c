#include "stdio.h"
#include "stdlib.h"

struct Node
{
   int value;
   struct Node *next;
};

struct List
{
   struct Node *first;
};

int main() 
{
   struct List *mylist = malloc(sizeof(struct List));
   struct Node *node1 = malloc(sizeof(struct Node));
   struct Node *node2 = malloc(sizeof(struct Node));
   struct Node *node3 = malloc(sizeof(struct Node));

   mylist->first = node1;
   node1->value = 1;
   node1->next = node2;
   node2->value = 2;
   node2->next = node3;
   node3->value = 3;
   node3->next = NULL;

   printf("values in the list:\n");
   struct Node *current = mylist->first;
   while (current != NULL)
   {
      printf("  %d \n", current->value);
      current = current->next;
   }

   free(mylist);
   return 0;
}
