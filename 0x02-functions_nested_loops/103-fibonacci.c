#include <stdio.h>
/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 * separated by a comma followed by a space.
 *
 * Return: Always 0.
 */

int main(void)
	{
		int i;
		unsigned long int j, k, next, sum;


		j = 1;
		k = 2;
		sum = 0;


		for (i = 1; i <= 33; ++i)
		{
			if (j < 4000000 && (j % 2) == 0)
			{
				sum = sum + j;
			}
			next = j + k;
			j = k;
			k = next;
		}


		printf("%lu\n", sum);


		return (0);
	}
