#ifndef VALUE
#define VALUE
#include <stdio.h>

typedef int Value;

Value copy_value (Value v);
Value free_value(Value v);
void print_value(FILE *out, Value v);
#endif
