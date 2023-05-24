Simple Shell
Simple Shell is a UNIX command line interpreter developed as part of the Holberton School curriculum. It provides a simplified implementation of the shell, allowing users to execute commands, navigate directories, and perform various operations.

Requirements
Allowed editors: vi, vim, emacs
All files will be compiled on Ubuntu 20.04 LTS using gcc, with the options -Wall -Werror -Wextra -pedantic -std=gnu89
All files should end with a new line
A README.md file, at the root of the project folder, is mandatory
Code should follow the Betty style, which will be checked using betty-style.pl and betty-doc.pl
The shell should not have any memory leaks
No more than 5 functions per file
All header files should be include guarded
System calls should be used only when necessary
Write a README file describing the project
Include an AUTHORS file at the root of the repository, listing all contributors to the project

Output
The shell should produce the same output as the sh (/bin/sh) shell and have identical error output. The only difference is that error messages should display the name of the program (argv[0]) correctly.

The shell may use the following functions and system calls:
access
chdir
close
closedir
execve
exit
_exit
fflush
fork
free
getcwd
getline
getpid
isatty
kill
malloc
open
opendir
perror
read
readdir
signal
stat 
lstat 
fstat 
strtok
wait
waitpid
wait3
wait4
write

Compilation
To compile the shell, use the following command:
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh

Testing
The shell can be used in both interactive and non-interactive modes. In interactive mode, you can execute commands directly in the shell. In non-interactive mode, commands can be piped into the shell for execution.

Interactive mode example:

shell
Copy code
$ ./hsh
($) /bin/ls
hsh main.c shell.c
($) exit
$
Non-interactive mode examples:

shell
Copy code
$ echo "/bin/ls" | ./hsh
hsh main.c shell.c test_ls_2
shell
Copy code
$ cat test_ls_2 | ./hsh
hsh main.c shell.c test_ls_2
hsh main.c shell.c test_ls_2

Feel free to contribute to the development of this shell and add more functionalities to enhance its capabilities.

AUTHORS
see AUTHORS file.

