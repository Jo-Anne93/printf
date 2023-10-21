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

/************************* PRINT_BINARY *************************/
/**
 * print_binary - A function that prints an unsigned
 * integer in binary form.
 * @n: The unsigned interger to be printed in binary
 *
 * Return: The number of characters printed.
 */
int print_binary(unsigned int n)
{
	int count = 0;
	if (n / 2)
	{
		count += print_binary(n / 2);
	}
	_putchar('0' + n % 2);
	return (count + 1);
}
/************************* OCTAL_PRINT *************************/
/**
 * octal_print - A function which prints an unsigned integer in octal form.
 * @i: the unsigned integer to be printed in octal.
 *
 * Return: The number of character printed.
 */
int octal_print(unsigned int i)
{
	int count = 0;
	if (i / 8)
	{
		count += octal_print(i / 8);
	}
	_putchar('0' + i % 8);
	return (count + 1);
}
/************************* PRINT_HEX *************************/
/**
 * print_hex - A function that prints an unsigned integer in lowercase
 * hexadecimal form.
 * @h: the unsigned integer to be printed in hexadecimal
 * Return: The number of character printed.
 */
int print_hex(unsigned int h)
{
	int remainder, count = 0;
	if (h / 16)
	{
		count += print_hex(h / 16);
	}
	remainder = h % 16;
	if (remainder < 10)
		_putchar('0' + remainder);
	return (count + 1);
}
