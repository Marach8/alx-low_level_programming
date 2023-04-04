#include "main.h"


/**
 * _memcpy - This function will copy the memory area
 * @dest: It will be stored here
 * @src: And it will be copied from here
 * @n: number of bytes are here
 * Return: The memory with n bytes changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;


	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}

	return (dest);
}
