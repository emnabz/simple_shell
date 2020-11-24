#include "holberton.h"
/**
 * **_split_line - split a line
 * @line : the line
 */
char **_split_line(char *line)
{
int bufsize = LSH_TOK_BUFSIZE, position = 0;
char **tokens = malloc(bufsize * sizeof(char*));
char *token;
if (!tokens)
{
perror("error\n");
exit(98);
}
token = strtok(line, LSH_TOK_DELIM);
while (token != NULL) {
tokens[position] = token;
position++;
if (position >= bufsize)
{
bufsize += LSH_TOK_BUFSIZE;
tokens = realloc(tokens, bufsize * sizeof(char*));
if (!tokens)
{
perror("error\n");
exit(98);
}
}
token = strtok(NULL, LSH_TOK_DELIM);
}
tokens[position] = NULL;
return tokens;
}
