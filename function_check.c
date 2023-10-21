#include "main.h"
#include <stdio.h>

/**
 * format_cases - A function that handles different
 * format specifiers for formatted output.
 * @c: the character argument
 * @count: counter
 * Return: count
 */
int format_cases(char c,va_list ar, int count)
{
	int ch, num;
	char *str;

	switch(c)
	{
		case 'c':
			/*for 'c' format specifier, gert the char and print it*/
			ch = va_arg(ar, int);
			_putchar(ch);
			count++;
			break;
		case 's':
			/*for 's' format specifier, get the string and print it*/
			str = va_arg(ar, char *);
			if (!str)
				str = "(nil)";
			count += _puts(str);
			break;
		case 'd':
		case 'i':
			int num = va_arg(ar, int);
			if (num < 0)
			{
				_putchar('-');
				count++;
				num = -num;
			}
			count += print_int(num);
			break;
		case '%':
			/*for '%%', print a single '%'*/
			_putchar('%');
			count++;
			break;
		default:
			/*If an unknown format specifier is encounted, print '%' followed by the char*/
			_putchar('%');
			_putchar(c);
			count += 2;
			break;
	}
	return (count);
}
/************************* PRINT_INT *************************/
/**
 * print_int - A function that prints an integer
 * @n: The integer to be printed
 *
 * Return: The number of characters printed.
 */
int print_int(int n)
{
	int count = 0;
	if (n / 10)
	{
		count += print_int(n / 10);
	}
	_putchar('0' + n % 10);
	return (count +1);
}
