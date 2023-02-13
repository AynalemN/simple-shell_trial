#include <stdio.h>
#include <stdlib.h>
/**
 * main - a print "$ ", wait for the user to enter a command,
 * prints it on the next line
 * Return: char
 */
int main(void)
{
	char *buff = NULL;
	size_t len = 0;

	while (1)
	{
		printf("$ ");
		getline(&buff, &len, stdin);
		printf("%s", buff);
	}
	if (getline(&buff, &len, stdin) == -1)
	{
		if (feof(stdin))
		{
			exit(EXIT_SUCCESS);
		}
		else
		{
			perror("readline");
			exit(EXIT_FAILURE);
		}
	}
	return (0);
}
