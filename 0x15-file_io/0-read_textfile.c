#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - that reads a text file and prints
 * @filename: variable pointer
 * @letters: size letters
 * Description: Write a function that reads a text file and prints it
 * to the POSIX standard output.
 * Return: the actual number of letters it could read and print, 0 otherwise
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t love, let, w;
	char *text;

	text = malloc(letters);
	if (text == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	love = open(filename, O_RDONLY);

	if (love == -1)
	{
		free(text);
		return (0);
	}

	let = read(love, text, letters);

	w = write(STDOUT_FILENO, text, let);

	close(love);

	return (w);
}
