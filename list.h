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

struct List *create_list();
struct Node *create_node(int value);

void add_value(struct List *list, int value);
void remove_value(struct List *list, int value);
void print_list(struct List *list);

