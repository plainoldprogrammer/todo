/*
 * Name:		PlainOldProgrammer
 * Start Date:	Tuesday 29 October 2019
 * Description:	Entry point of the command line utility.
 *
 */

#include <stdio.h>

void logCommandLineArguments();
void processCommandLineArguments();

int main(int argc, char *argv[])
{
	logCommandLineArguments(argc, argv);
	processCommandLineArguments(argc, argv);

	return 0;
}

void logCommandLineArguments(int argc, char *argv[])
{
	printf("Number or arguments: %d\n", argc);

	int i = 0;

	while (i < argc)
	{
		printf("argv[%d]: %s\n", i, argv[i]);
		i++;
	}
}

void processCommandLineArguments(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("processing argv[%d]\n", i);
		i++;
	}
}

