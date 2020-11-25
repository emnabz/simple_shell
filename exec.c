#include "shell.h"
/**
 * execute - executes a program
 * @args: a double pointer of command line arguments
 * @program: name of shell
 *
 * Return: always returns 1
 */
int execute(char **args)
{
pid_t child;
int status;
child = fork();
if (child == -1)
{
perror("failed forking child");
return (-1);
}
else if (child == 0)
{
if (execvp(args[0], args) < 0)
{ 
perror("Could not execute command"); 
} 
exit(0);
}
else
{ 
wait(NULL);  
return (0); 
}
}
