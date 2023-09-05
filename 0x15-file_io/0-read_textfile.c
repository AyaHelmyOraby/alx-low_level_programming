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
	ssize_t filedata;
	ssize_t w;
	ssize_t terminal;

	filedata = open(filename, O_RDONLY);
	if (filedata == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	terminal = read(filedata, buffer, letters);
	w = write(STDOUT_FILENO, buffer, terminal);

	free(buffer);
	close(filedata);
	return (w);
}

