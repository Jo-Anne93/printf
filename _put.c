#include "main.h"

/**
 * puts - A function that prints every other char of a string
 * @str: string
 *
 * Return: count
 */
int _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
