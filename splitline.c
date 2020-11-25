#include "shell.h"
/**
 * **_split_line - split a line
 * @line : the line
 * Return: tokens
 */
char **_split_line(char *line)
{
int bufsize = 1024, position = 0;
char **tokens = malloc(bufsize * sizeof(char *));
char *token;
if (!tokens)
{
perror("error\n");
return (NULL);
}
token = strtok(line, " ");
while (token)
{
tokens[position] = token;
position++;
}
tokens[position] = NULL;
return (tokens);
}
