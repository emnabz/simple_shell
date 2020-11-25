#ifndef HEADER
#define HEADER
#define BUFSIZE 1024
#define LSH_TOK_BUFSIZE 64
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>
char *lsh_read_line(void);
char *_getline(void);
int main(int argc, char **argv);
void loop(void);
char *_realloc(char *ptr, int old_size, int new_size);
char **_split_line(char *line);
#endif
