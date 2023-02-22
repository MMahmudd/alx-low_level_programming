#include "main.h"
/*
 *
 * _islower - check if char is lowercase
 * @c:is the char to be checked
 * Return: 1 if char is lowercase, otherwise 0.
 *
 */

int _islower(int c)
	/*immplementation of _islower function*/
	{
		if (c >= 'a' && c <= 'z')
			return (1);
		else
			return (0);
	}
