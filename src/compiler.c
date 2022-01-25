#include <stdio.h>

#define DATASIZE 1001

void brainfuck(char *command_pointer, char *input) {
  int bracket_flag;
  char command;
  char data[DATASIZE] = {0};
  char *dp;

  dp = &data[DATASIZE/2];
  
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

          for (bracket_flag=1; bracket_flag; command_pointer++)
            if (*command_pointer == '[')
              bracket_flag++;

            else if (*command_pointer == ']')
              bracket_flag--;
        }
        break;
      case ']':

      if (*dp) {
          command_pointer -= 2;
          for (bracket_flag=1; bracket_flag; command_pointer--)
            if (*command_pointer == ']')
              bracket_flag++;
            else if (*command_pointer == '[')
                bracket_flag--;
          command_pointer++;
        }
      break;
    }
  printf("\n");
}
