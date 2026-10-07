#include "stack.h"
#include <stdio.h>

int main() {

  pop();

  push(5.0);
  printf("The value popped from the stack, %g\n", pop());

  return 0;
}
