#include "main.h"
/**
 * strcat - concatenates strings
 * @src: the source string
 * @dest: pointer to the string
 * Return: Apointer to the destination string @dest.
 */
char *strcat(char *dest, const char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
