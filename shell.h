#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <limits.h>
#include <fcntl.h>
#include <errno.h>
#include <sys/types.h>

char **strtow(char *str, char *d);
char **strtow2(char *, char);
void display_prompt(void);
void read_command(char *command, size_t size);
void dan_print(const char *message);
void execute_command(const char *command);

#endif /* SHELL_H */
