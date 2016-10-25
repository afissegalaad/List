#ifndef LIST
#define LIST
#include <stdio.h>
#include "value.h"

typedef struct _List{
  Value value;
  struct _List *next;
} List;

List* make_element_list(Value value);
List* free_element_list(List *element);
List* make_list();
List* free_list(List *list);
List* insert_element_list_head(List *list, List *element);
List* insert_element_list_end(List *list, List *element);
List* extract_element_list(List *list, List *element);
int length_list(List *list);
void print_element(FILE *out, List *element);
void print_list(FILE *out, List *list);

#endif
