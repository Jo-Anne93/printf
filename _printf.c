#include "main.h"

/**
 * _printf - A function that prints formatted output to stdout.
 * @format: The format string.
 *
 * Return: The number of char printed.
 */
int _printf(const char *format, ...)
{
	/* Variable declerations */
	int i, counter = 0;
	va_list ar;
	va_start(ar, format);

	/* Initializing of iterator of format */
	i = 0;
	/* iterate through each character in format argument*/
	while(format[i])
	{
		/*If a char is a "%", check the next char to determine format specifier*/
		if (format[i] == '%')
		{
			/*check the next character after "%"*/
			i++;
			/* function that checks format specifier and returns number of char*/
			counter = format_cases(format[i], ar, counter);
		}
		/*Else print the characters as they are or if it's not %*/
		else
		{
			_putchar(format[i]);
			counter++;
		}
		i++;
	}
	/*Return the total num of character printed*/
	return (counter);
}
