#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fs;
	ssize_t z;
	ssize_t a;

	fs = open(filename, O_RDONLY);
	if (fs == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	a = read(fs, buffer, letters);
	z = write(STDOUT_FILENO, buffer, a);

	free(buffer);
	close(fs);
	return (z);
}
