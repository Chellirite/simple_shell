#include "shell.h"


int main(void)
{
	char command[128];

	while (true) {
            display_prompt();
	    read_command(command, sizeof(command));
	    execute_command(command);
	}{

	return 0;

	}
}
