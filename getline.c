#include "shell.h"
/**
 * *_getline - recreate the getline function
 * Return: a string
 */
char *_getline(void)
{
int position = 0, bufsize = 1024;
char *buffer;
int c;
buffer = malloc(bufsize * sizeof(char *));
if (buffer == NULL)
return (NULL);
if (!buffer)
{
perror("error");
return (NULL);
}
do {
c = read(STDIN_FILENO, &c, 1);
buffer[position] = c;
position++;
if (position >= bufsize)
{
buffer  = _realloc(buffer, bufsize, bufsize + 1);
if (buffer == NULL)
{
perror(" allocation error\n");
return (NULL);
}
}
while (c != EOF && c != '\n')
buffer[position] = '\0';
return (buffer);
}
