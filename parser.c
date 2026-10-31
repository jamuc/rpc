/* 
* Read from the buffered reader. Identify numbers and operands
* and return them as a char string.
* Skip any whitespace or tabs before the numbers
*/

#include "buffered_reader.h"
#include "parser.h"
#include <stdio.h>
#include <ctype.h>

int parse(char parsed_string[]) {
  char current_char;

  while((parsed_string[0] = current_char = read()) == ' ' || current_char == '\t')
    ;
  
  parsed_string[1] = '\0';
  
  if(!isdigit(current_char) && current_char != '.') {
    // For simplicity, if it's not a digit
    // it's an operand
    // or it will return EOF
    return current_char;
  }

  int count = 0;

  if (isdigit(current_char)) // collect integer part
    while(isdigit(parsed_string[++count] = current_char = read()))
      ;

  if (current_char == '.') // collect fraction part
    while(isdigit(parsed_string[++count] = current_char = read()))
      ;

   parsed_string[count] = '\0';

  if (current_char != EOF)
    unread(current_char);

  return NUMBER;
}
