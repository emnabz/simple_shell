Description
simple_shell is a command line interpreter, in the tradition of the first Unix shell written by Ken Thompson in 1971. it includes the basic functionality of a traditional Unix-like command line user interface. Standard functions and system calls employed in simple_shell include: access, execve, exit, fork, free, fstat, getline, malloc, perror, signal, stat, wait, write.
Authors
Nani Eya & Bouaziz Emna
Files
Simple shell 0.1 : Write a UNIX command line interpreter.
Display a prompt and wait for the user to type a command. A command line always ends with a new line.
The prompt is displayed again each time a command has been executed.
The command lines are simple, no semicolons, no pipes, no redirections or any other advanced features.
The command lines are made only of one word. No arguments will be passed to programs.
If an executable cannot be found, print an error message and display the prompt again.
Handle errors.
Simple shell 0.2 : Handle command lines with arguments
Simple shell 0.3 : Handle the PATH
Simple shell 0.4 : Implement the exit built-in, that exits the shell
Simple shell 1.0 : Implement the env built-in, that prints the current environment
