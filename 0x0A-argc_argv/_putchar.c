#include <stdio.h>
#include "main.h"

/**
 * _putchar - this will write the character to std out
 * @c: This is the character to be printed
 * Return: Always 1 on Success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
