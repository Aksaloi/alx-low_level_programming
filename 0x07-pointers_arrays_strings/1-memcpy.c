#include "main.h"
/**
 * _memcpy -  copies memory area
 * @n: number of bytes
 * @dest: memory are where it is stored
 * @src:memory area wher it is copied
 * Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r;
	int i = n;

	for (r = 0; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
