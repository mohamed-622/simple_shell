#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <errno.h>


int my_ctrld(char **args);
int my_cd(char **args);
int my_help(char **args);
extern char **environ;
int my_exit(char **args);
int _strcompare(char *s1, char *s2);
size_t _strncompare(char *s1, char *s2, size_t n);
int _strlength(char *s);
char *_strcopy(char *dest, char *src);
char *_concastr(char *dest, char *src);
int _putchar(char c);

char *_get_variable_path(char **env);
int _values_path(char **arg, char **env);
char *_getline_command(void);
void _getenv(char **env);
char **strtokenize(char *lineptr);
void _exit_command(char **args, char *lineptr, int _exit);
int _fork_fun(char **arg, char **av, char **env,
char *lineptr, int np, int c);


#endif /* SHELL_H */
