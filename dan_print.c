#include "shell.h"

void dan_print(const char *message)
{
	write(STDOUT_FILENO, message, strlen(message));
}	
