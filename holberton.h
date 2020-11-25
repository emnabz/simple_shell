#ifndef SHELL
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <signal.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <linux/limits.h>
#define SHELL
#define BUFSIZE 1024
#define LSH_TOK_BUFSIZE 64
#define LSH_TOK_DELIM " \t\r\n\a"
char *_realloc(char *ptr, int old_size, int new_size);
char *_getline(void);
int main();
int lsh_launch(char **args);
void loop(void);
int lsh_execute(char **args);
char *_realloc(char *ptr, int old_size, int new_size);
char **_split_line(char *line);
int lsh_exit(char **args);
int lsh_cd(char **args);
int lsh_help(char **args);
int lsh_exit(char **args);
char *builtin_str[] = {
"cd",
"help",
"exit"
};
int (*builtin_func[]) (char **) = {
&lsh_cd,
&lsh_help,
&lsh_exit
};
int lsh_num_builtins() {
return sizeof(builtin_str) / sizeof(char *);
}
#endif
