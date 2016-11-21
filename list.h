/**
 * @file list.h
 * @author Galaad
 * @date October 27, 2016
 * @brief Chained list.
 */

#ifndef LIST
#define LIST
#include <stdio.h>
#include "value.h"

/**
 * @brief Type the represents both a chained list and an element of the list.
 */
typedef struct _List{
  Value value; /** value of the element */
  struct _List *next; /** next element in the list */
} List;

/**
 * @brief Create an element of a list from a value.
 */
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
