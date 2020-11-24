#include "holberton.h"
/**
 *lsh_loop - loop 
 *
 */
void lsh_loop(void)
{
char *line;
char **args;
int status;
do
{
printf("> ");
line = getline();
args = lsh_split_line(line);
status = lsh_execute(args);
free(line);
free(args);
}
while (status);
}
