#include "shell.h"
/**
 * cdfunc - function
 * @args : char
 * Return: always 1
 */
int cdfunc(char **args)
{
if (args[1] == NULL)
{
perror("lsh: expected argument to \"cd\"\n");
}
else
{
if (chdir(args[1]) != 0)
{
perror("lsh");
}
}
return (1);
}
