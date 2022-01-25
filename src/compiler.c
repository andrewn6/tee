#include <stdio.h>

#define DATASIZE 1001

void brainfuck(char *command_pointer, char *input) {
  int bracket_flag;
  char command;
  char data[DATASIZE] = {0};
  char *dp;

  dp = =&data[DATASIZE/2];
  
  while (command = *command_pointer++)
    switch (command) {
      case '>':
        dp++;
        break;

      case '<':
        dp--;
        break;

      case '+':
        (*dp)++;
        break;

      case '-':
        (*dp)--;
        break;

      case '.':
        printf("%c", *dp);
        break;
      
      case ',':
        *dp = *input++;
        break;
      case '[':
        if (!*dp) {

        }
    }
}
