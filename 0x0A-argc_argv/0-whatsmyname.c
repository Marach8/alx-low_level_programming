#include "main.h"

/**
 * main - This will print the name of a programme followed by anew line
 * @argc: size of array
 * @argv: the array itself
 * Return: 0 for success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
