#include "main.h"
/**
 *_memcpy - a functi that copy memory area.
 *@dest: memory where is store
 *@src: memory where is copy
 *@n: number of byt
 *
 *Return: copy memo with n byte change
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

