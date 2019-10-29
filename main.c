/*
 * Name:		PlainOldProgrammer
 * Start Date:	Tuesday 29 October 2019
 * Description:	Entry point of the command line utility.
 *
 */

#include <stdio.h>

int main(int argc, char *argv[])
{
	printf("Number or arguments: %d\n", argc);

	int i = 0;
	while (i < argc)
	{
		printf("argv[%d]: %s\n", i, argv[i]);
		i++;
	}

	return 0;
}

