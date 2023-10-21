#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Percent:[%%]\n");
    printf("Percent:[%%]\n");
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    _printf("Binary:[%b]\n", 42);
    printf("Binary:[%b]\n", 42);
    _printf("Unsigned Integer:[%u]\n", 12345);
    printf("Unsigned Integer:[%u]\n", 12345);
    _printf("Octal:[%o]\n", 12345);
    printf("Octal:[%o]\n", 12345);
    _printf("Lowercase Hex:[%x]\n", 12345);
    printf("Lowercase Hex:[%x]\n", 12345);
    _printf("Uppercase Hex:[%X]\n", 12345);
    printf("Uppercase Hex:[%X]\n", 12345);
    return (0);
}
