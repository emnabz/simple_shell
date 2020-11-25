#include "shell.h"
/**
 *loop - loop
 *
 */
void loop(void)
{
char *line;
char **args;
int status;
do {
printf("$ ");
line = getline();
args = split_line(line);
status = execute(args);
free(line);
free(args);
}
while (status)
}
