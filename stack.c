#include <stdio.h>

#define MAX_SIZE 120

int sp = 0; // current free slot on the stack
double stack[MAX_SIZE];

/*
 * Push a new value on the stack, print error message
 * if the stack is full
 */
void push(double value) {
  if (sp < MAX_SIZE) {
    stack[sp++] = value;
  } else {
    printf("Error: Stack is full, was not able to push: %g\n", value);
  }
}

/*
 * Retrieve the top most value of the stack.
 * Print error message if stack empty.
 */
double pop() {
  if (sp == 0) {
    printf("Stack is empty, returning 0.0\n");
    return 0.0;
  }

  return stack[--sp];
}
