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
   int size;
};

struct List *create_list()
{
   struct List *list = malloc(sizeof(struct List));
   list->first = NULL;
   list->size = 0;
   return list;
}

struct Node *create_node(int value)
{
   struct Node *node = malloc(sizeof(struct Node));
   node->value = value;
   node->next = NULL;
   return node;
}

void add_node_to_end_of_list(struct List *list, struct Node *node)
{
   if (list->first == NULL)
   {
      list->first = node;
   }
   else
   {
      struct Node *current = list->first;
      while (current->next != NULL)
      {
         current = current->next;
      }
      current->next = node;
   }
}

void add_value(struct List *list, int value)
{
   struct Node *node = create_node(value);
   add_node_to_end_of_list(list, node);

   list->size++;
}

void remove_value(struct List *list, int value)
{
   struct Node *current = list->first;
   struct Node *previous = NULL;

   while (current != NULL)
   {
      if (current->value == value)
      {
         if (previous == NULL) 
         {
            list->first = current->next;
         }
         else
         {
            previous->next = current->next;
         }
         free(current);
         break;
      }
      previous = current;
      current = current->next;
   }
}

void print_list(struct List *list)
{
   printf("values in the list(%d):\n", list->size);
   struct Node *current = list->first;
   while (current != NULL)
   {
      printf("  %d \n", current->value);
      current = current->next;
   }
}

