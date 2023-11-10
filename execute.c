#include "shell.h"
#include <stdlib.h>

void execute_command(const char *command)
{
	pid_t child_pid = fork();

	if (child_pid == -1) {
	     	dan_print("Error forking command.\n");   
		exit(EXIT_FAILURE); 

	} else if (child_pid == 0) {
		execlp(command, command, (char *)NULL);
		perror("execlp");
		exit(EXIT_FAILURE);
	} else 	{
		wait(NULL);
	}
}
