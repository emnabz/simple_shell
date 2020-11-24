char getline(void)
{
{
int bufsize = 1024;
int position = 0;
char *buffer 
int c;
buffer = malloc(bufsize);
if (buffer == NULL)
return (0);
if (!buffer) 
{
perror("error");
exit(-1);
}
while (1);
{
fflush(stdin);
c = read(STDIN_FILENO, &c, 1);
if (c == EOF || c == '\n')
{
buffer[position] = '\0';
return buffer;
}
else 
{
buffer[position] = c;
}
position++;
if (position >= bufsize)
{
buffer  = _realloc(buffer,bufsize, buffsize + 1);
if (buffer == NULL)
{
perror(" allocation error\n");
exit(EXIT_FAILURE);
}
}
}
return (buffer);
}
