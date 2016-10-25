#include <stdio.h>
#include <stdlib.h>
#include "list.h"
#include "trace.h"

List* make_element_list(Value value){
  TRACE_DEBUG(stdout,"make_element_list\n");
  List* l = malloc(sizeof(List));
  l->value = copy_value(value);
  l->next = NULL;
  return l;
}

List* free_element_list(List *element){
  //if (element ==
  free_value(element->value);
  free(element);
  return NULL;
}

List* make_list(){
  return NULL;
}

List* free_list(List *list){
  if (list == NULL) return NULL;
  List* list_head = list;
  while(list_head != 0){
    list = list_head->next;
    free_element_list(list_head);
    list_head = list;
  }
  return NULL;
}

List* insert_element_list_head(List *list, List *element){
  element->next = list;
  return element;
}

List* insert_element_list_end(List *list, List *element){
  List *p = list;
  while(p->next != NULL){
    p = p->next;
  }
  p->next = element;
  return list;
}

List* extract_element_list(List *list, List *element){
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
  int n = 0;
  while(list != NULL){
    list = list->next;
    n++;
  }
  return n;
}

void print_element(FILE *out, List *element){
  TRACE_DEBUG(stdout,"print_element\n");
  print_value(out, element->value);
}

void print_list(FILE *out, List *list){
  TRACE_DEBUG(stdout,"print_list\n");
  while(list != NULL){
    print_element(out, list);
    list = list->next;
  }
}
