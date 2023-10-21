#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char c);
int _puts(char *s);
int format_cases(char c, va_list ar, int count);
int print_int(int n);

#endif/*Header file*/
