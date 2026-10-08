/**
 * Uses getchar() to read characters from stdin. Allows buffering those
 * readed characters for later consumption.
 *
 * **/
#include <stdio.h>
#define BUFF_SIZE 120

int bp = 0; // next free space on the bufffer
char buffer[BUFF_SIZE];

int read() { return (bp > 0) ? buffer[--bp] : getchar(); }

void unread(int value) {
  if (bp < BUFF_SIZE) {
    buffer[bp++] = value;
  } else {
    printf("Error: The buffer is full, cannot push %d to the buffer.\n", value);
  }
}
