#include "shell.h"
/**
*check_path - checks path
*@head: head of PATH linked list
*@command: command from arguments
*
*Return: returns the proper path or NULL on failure
*/
char *check_path(path_t *head, char *command)
{
path_t *temp;
char *filename;
struct stat st;
if (!command || !head)
return (NULL);
temp = head;
while (temp)
{
filename = path_concat(temp->dir, command);
if (!filename)
return (NULL);
if (stat(filename, &st) == 0)
{
return (filename);
}
free(filename);
temp = temp->next;
}
return (NULL);
}
