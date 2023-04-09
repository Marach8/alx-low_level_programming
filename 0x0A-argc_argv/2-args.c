#include <stdio.h>
#include "main.h"

/**
 * main - This will print arguments received
 * @argc: no of arguments received
 * @argv: the array itself
 * Return: 0 for Success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[1]);
	}
	return (0);
}
