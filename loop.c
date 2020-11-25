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
line = read_line();
args = _split_line(line);
status = execute(args);
free(line);
free(args);
while (status)
}
}
