#include "main.h"
/**
 * _strncpy - copies atmost an inputed number
 *  of bytes from sting srcinto dest.
 *  @dest: the buffer storing the string copy.
 *  @src: The source string
 *  @n: the maximum to the resulting string dest.
 *  Return: A point to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];
	for (index = src_len; index < n; index++)
		dest[index] = '\0';
	return (dest);
}
