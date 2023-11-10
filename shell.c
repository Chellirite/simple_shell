#define _GNU_SOURCE
#include "shell.h"


int main(int ac, char **argv)
{
	char command[128];

	while (true) {
            display_prompt();
	    read_command(command, sizeof(command));
	    execute_command(command);
	}{char *lineptr;

  /* declaring void variables */
  (void)ac; (void)argv;

  getline(&lineptr, $n, stdin);
  printf("%s\n", lineptr);

  free(lineptr);
}

	return 0;
}
