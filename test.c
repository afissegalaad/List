#include <stdlib.h>
#include <assert.h>
#include "list.h"

List *list;

void init_test(){
  List *list = make_list();
}

void test_insert(){
  List *el1 = make_element_list(2);
  List *el2 = make_element_list(3);
  assert(length_list(list) == 0);
  list = insert_element_list_head(list, el1);
  assert(length_list(list) == 1);
  list = insert_element_list_end(list, el2);
  assert(length_list(list) == 2);
  printf("test_insert OK\n");
}

void test_extract(){
  List *first = list;
  list = extract_element_list(list, first);
  assert(length_list(list) == 1);
  printf("test_free OK\n");
}

void test_free(){
  list = free_list(list);
  assert(length_list(list) == 0);
  printf("test_free OK\n");
}

int main(){
  test_insert();
  test_extract();
  test_free();
  printf("All tests OK\n");
  return 0;
}
