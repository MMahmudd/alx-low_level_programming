#include "main.h"
/**
 * _memset - fill out  block of memory with specifically val
 * @s: start addres of meme to fill
 * @b:  desired val
 * @n: numbers byte to be changed
 *
 * Return: change array with new val for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

