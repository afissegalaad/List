/* INT VALUE */
#include "value.h"

Value copy_value (Value v){
  return v;
}

Value free_value(Value v){
  return v;
}

void print_value(FILE *out, Value v){
  fprintf(out, "%d\n", v);
}
