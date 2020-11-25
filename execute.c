#include "shell.h"
/**
*check_command - checks if command is valid
*@args: argument vector
*@program: name of shell
*
* Return: returns something
*/
int check_command(char **args, char *program)
{
char *result;
if (args[0][0] == '/')
{
if (execve(args[0], args, NULL) == -1)
__error(args, program, 3);
}
else
{
result = (check_path(main_path, args[0]));
if (!result)
__error(args, program, 1);
if (execve(result, args, NULL) == -1)
__error(args, program, 2);
}
return (1);
}
/**
* execute - executes a program
* @args: a double pointer of command line arguments
* @program: name of shell
*
* Return: always returns 1
*/
int execute(char **args, char *program)
{
pid_t child_pid;
int status;
child_pid = fork();
if (child_pid == 0)
{
check_command(args, program);
exit(0);
}
else if (child_pid == -1)
{
perror("Error: fork failed");
exit(99);
}
else
{
do {
waitpid(child_pid, &status, WUNTRACED);
} while (WIFEXITED(status) == 0 && WIFSIGNALED(status) == 0);
}
return (1);
}
