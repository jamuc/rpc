#include "buffered_reader.h"
#include "stack.h"
#include <stdio.h>

int main() {
  int c = 0;

  pop();

  push(5.0);
  printf("The value popped from the stack, %g\n", pop());

  c = read();
  unread(c);

  c = read();
  printf("You just entered value %c\n", c);

  return 0;
}
