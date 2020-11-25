#include "shell.h"
/**
 * lsh_read_line - read a line
 * Return: a string
 */
char *lsh_read_line(void)
{
char *line = NULL;
ssize_t bufsize = 0;
if (getline(&line, &bufsize, stdin) == -1)
{
if (feof(stdin))
{
exit(EXIT_SUCCESS);
}
else
{
perror("readline");
exit(EXIT_FAILURE);
}
}
return (line);
}
