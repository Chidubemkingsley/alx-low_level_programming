#include "main.h"

/**
  * _memcpy - copy memory area of its function
  * @dest:pointer to return of the integer
  * @src: source memory area of teh integer
  * @n: bytes from memory area to copy of the integer
  *
  * Return: the pointer to dest of teh necessary memory
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
