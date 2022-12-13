#include "main.h"
/**
 * _memcpy - copies memory area,
 * @dest: destination memory area.
 * @src: source memory area.
 * @n: bytes filled.
 * Return: the pointer to dest.
 *
 * PSEUDOCODE
 * Looping through the length of bytes n
 *	dest[j] = src[j]
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
		*(dest + j) =  *(src + j);

	return (dest);
}
