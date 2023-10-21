#include "main.h"
#include <stdio.h>

/************************* PRINT_UPPER_HEX *************************/
/**
 * print_upper_hex - A function that prints unsigned integer in
 * uppercase hexadecimal format.
 *
 * Return: The number of character printed.
 */
int print_upper_hex(unsigned int h)
{
	int remainder, count = 0;
	if (h / 16)
	{
		count += print_upper_hex(h / 16);
	}
	remainder = h % 16;
	if (remainder <10)
		_putchar('0' + remainder);
	else
		_putchar('A' + remainder - 10);
	return (count + 1);
}

/**
 * format_cases - A function that handles different
 * format specifiers for formatted output.
 * @c: the character argument
 * @count: counter
 * Return: count
 */
int format_cases(char c,va_list ar, int count)
{
	int ch;
	int num;
	char *str;
	unsigned int G_num;

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
			num = va_arg(ar, int);
			if (num < 0)
			{
				_putchar('-');
				count++;
				num = -num;
			}
			count += print_int(num);
			break;
		case 'u':
			G_num = va_arg(ar, unsigned int);
			count += print_int(G_num);
			break;
		case 'o':
			G_num = va_arg(ar, unsigned int);
			count += octal_print(G_num);
			break;
		case 'X':
			G_num = va_arg(ar, unsigned int);
			count += print_upper_hex(G_num);
			break;
		case 'x':
			G_num = va_arg (ar, unsigned int);
			count += print_hex(G_num);
			break;
		case 'b':
			/* for 'b' format specifier to handle binary specifier*/
			G_num = va_arg(ar, unsigned int);
			count += print_binary(G_num);
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
