#include "stack.h"
#include "parser.h"
#include <stdio.h>

#define MAXOP 120

int main() {

  char s[MAXOP];
  int type = 0;

  while ((type = parse(s)) != EOF) {
    printf("this is the type %c \n", type);
    printf("The string %s \n", s);
  }

  return 0;
}
