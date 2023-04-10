#include "main.h"
#include <stdlib.h>

/*
 *  read_textfile- read text fil printf to STDOUT.
 *  @filename: text fil being read
 *  @letters: numbr of letter to be reading
 *  Return: w- actual numer of byte read and print
 *  0 when function fails or filename is NULL.
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);

	free(buf);
	close(fd);
	return (w);
}
