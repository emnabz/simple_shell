.B Simple shell
.B Description
simple_shell is a command line interpreter. it includes the basic functionality of a traditional Unix-like command line user interface.
.B Quik start
1- clone the repository to your local directory

$ git clone https://github.com/emnabz/simple_shell.git

2- Start up simple_shell, compile using

$ gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
.B Current features
Run commands in $PATH
use "exit" or "ctr + D" to close the program
use "cd" to navigate
. B Usage Examples
start by opening the shell and running a simple command like pwd, then exit:
simple_shell:/home/username$ pwd
/home/username/
simplesh:/home/username$ exit
Username@your-regular-prompt:~$
.B Authors
Nani Eya & Bouaziz Emna
Files
