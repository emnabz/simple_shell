#include "shell.h"
#include <stdio.h>
/**
*read_line - gets command line from user
*
*Return: returns the user input from the command line
*/
char *read_line(void)
{
char *line = NULL;
size_t n = 0;
if (isatty(STDIN_FILENO) == 1)
write(1, "$ ", 2);
if (getline(&line, &n, stdin) <= 0)
{
if (isatty(STDIN_FILENO) == 1)
write(STDOUT_FILENO, "\n", 1);
hsh_exit(NULL, line);
}
return (line);
}
