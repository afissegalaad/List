#include <stdio.h>
#include <stdlib.h>
#include "list.h"
#include "trace.h"

#define OUT stdout

List* make_element_list(Value value){
  TRACE_DEBUG(OUT);
  List* l = malloc(sizeof(List));
  l->value = copy_value(value);
  l->next = NULL;
  return l;
}

List* free_element_list(List *element){
  TRACE_DEBUG(OUT);
  free_value(element->value);
  free(element);
  return NULL;
}

List* make_list(){
  TRACE_DEBUG(OUT);
  return NULL;
}

List* free_list(List *list){
  TRACE_DEBUG(OUT);
  if (list == NULL) return NULL;
  List* list_head = list;
  while(list_head != NULL){
    TRACE_DEBUG_MSG(OUT,"while");
    list = list_head->next;
    free_element_list(list_head);
    list_head = list;
  }
  return NULL;
}

List* insert_element_list_head(List *list, List *element){
  TRACE_DEBUG(OUT);
  element->next = list;
  return element;
}

List* insert_element_list_end(List *list, List *element){
  TRACE_DEBUG(OUT);
  List *p = list;
  while(p->next != NULL){
    p = p->next;
  }
  p->next = element;
  return list;
}

List* extract_element_list(List *list, List *element){
  TRACE_DEBUG(OUT);
  List *p = list;
  // extract first element
  if (list == element){
    p = list->next;
    element->next = NULL;
    return p;
  }
  // otherwise
  while (p->next != element){
    p = p->next;
  }
  p->next = element->next;
  element->next = NULL;
  return list;
}

int length_list(List *list){
  TRACE_DEBUG(OUT);
  int n = 0;
  while(list != NULL){
    list = list->next;
    n++;
  }
  return n;
}

void print_element(FILE *out, List *element){
  TRACE_DEBUG(OUT);
  print_value(out, element->value);
}

void print_list(FILE *out, List *list){
  TRACE_DEBUG(OUT);
  while(list != NULL){
    print_element(out, list);
    list = list->next;
  }
}
