#ifndef _SHELL_H_
#define _SHELL_H_

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

#define BUFFER 1024
#define TRUE 1
#define PROMPT "$ "
/* error strings */
#define ERR_MALLOC "Unable to malloc space\n"
#define ERR_FORK "Unable to fork and create child process\n"
#define ERR_PATH "No such file or directory\n"
extern char **environ;

/* Points to an array of pointers to strings called the "environment" */
extern char **environ;

pid_t _getppid(void);
int main(int ac, char **av);
int main();

/** STRING FUNCTION */

char *_strtok(char *str, const char *tok);
unsigned int check_delim(char c, const char *str);

#endif
