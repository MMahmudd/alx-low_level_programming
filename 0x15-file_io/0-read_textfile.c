#include "main.h"
#include <stdlib.h>

/*
 *  read_textfile- read text fil printf to STDOUT.
 *  @filename: text fil being read
 *  @letters: numbr of letter to be reading
 *  Return: w- actual numer of byte reed and print
 *  0 when function fail or filename is NULL.
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bu;
	ssize_t fdd;
	ssize_t w;
	ssize_t tt;

	fd = open(filename, O_RDONLY);
	if (fdd == -1)
		return (0);
	bu = malloc(sizeof(char) * letters);
	tt = read(fdd, bu, letters);
	w = write(STDOUT_FILENO, bu, tt);

	free(bu);
	close(fdd);
	return (w);
}
