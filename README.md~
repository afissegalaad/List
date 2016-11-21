# List

List is a C library that implements chained list.

The goal is not just to provide an obvious implementation of chained list.
It is to show several development C best practices:

* **Genericity:** The list can be used over any kind of type.
* **Trace:** You can trace all the code without impact on release code.
* **Test:** The right manner to write unit tests in C using assert.
* **Build:** Choose to build a release or a debug version.

## Examples

### Use the library

```C
#include <list.h>
int main(){
  List *list = make_list();
  List *el = make_element_list(2);
  list = insert_element_list_head(list, el);
  list = free_list(list);
}
```

This example shows how to use the library. It creates a list and an
element. Then it shows how to add the element to the list. Then it
frees the list.

### Trace the code

```C
#define OUT stdout
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
```

This example show how `free_list` is implemented using `TRACE` macros.

### Test the correctness of the implementation

```C
void test_extract(){
  List *first = list;
  list = extract_element_list(list, first);
  assert(length_list(list) == 1);
  printf("test_free OK\n");
}
```

## Installation

Build the library, install it on your OS then Include the header in your C code:

```C
include <list.h>
```

## License

List is made under the terms of the MIT license.