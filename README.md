# List

List is a C library that implements chained list.

The goal is not just to provide an obivous implementation of chained list.
It is to show several development tricks that can be used in different context.

* **Genericity:** The list can be used over any kind of type.
* **Trace:** You can trace easily all the code without impact on release code.
* **Test:** The right manner to write unit tests in C.
* **Build:** Build a release or a debug version.

## Examples

```C
List *list = make_list();
List *el = make_element_list(2);
list = insert_element_list_head(list, el);
list = free_list(list);
```

This example shows how to create a list and an element and how to add the element to the list.
Then free the list.

## Installation

Build the library, install it on your OS then Include the header in your C code:

```C
include <list.h>
```

## License

List is made under the terms of the MIT license.