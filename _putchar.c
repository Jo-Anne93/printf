#include <unistd.h>

/**
 * _putchar - A character c that writes to standard out.
 * @c: The character to be printed.
 *
 * Return: ALways 1 on success & on error -1 is returned .
 * and errno is set approximately.
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
