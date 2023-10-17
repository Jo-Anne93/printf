GROUP PROJECT
0x11. C - printf

0x11. C - printf

        PROJECT REQUIREMENT.
* All filess were edited in vi
* All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89.
* All files should end with a new line
* The codes are writen in betty style.
* The use of global variables are not allowed.
* Authorized functions and macros;
> write (man 2 write)
> malloc (man 3 malloc)
> free (man 3 free)
> va_start (man 3 va_start)
> va_end (man 3 va_end)
> va_copy (man 3 va_copy)
> va_arg (man 3 va_arg)

	- Compilation:
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
Note: As a consequence, be careful not to push any c file containing a main function in the root directory of your project (you could have a test folder containing all your tests files including main functions)
Our main files will include your main header file (main.h): #include main.h
You might want to look at the gcc flag -Wno-format when testing with your _printf and the standard printf.

	Description
The function _printf writes output to standard output. The function writes under the control of a format string that specifies how subsequent arguments (accessed via the variable-length argument facilities of stdarg) are converted for output.Using the Prototype: int _printf(const char *format, ...);

	MANDATORY TASKS

* Task 0 - Write a function that produces output according to a format in the prototype above which handles the converion specifiers: c, s, %.
* Task 1 - Handle the following conversion specifiers: d,i


	ADAVANCE TASKS

* Task 2 - Handle the following custom conversion specifiers: b:the unsigned int argument is converted to binary
* Task 3 - Handle the following conversion specifiers: u, o, x, X
* Task 4 - Use a local buffer of 1024 chars in order to call write as little as possible.
* Task 5 - Handle the following custom conversion specifier: S:prints the string.
* Task 6 - Handle the following conversion specifier: p.
* Task 7 - Handle the following length modifiers for non-custom conversion specifiers: +, space, #
* Task 8 - Handle the following length modifiers for non-custom conversion specifiers: l, h
* Task 9 - Handle the field width for non-custom conversion specifiers.
* Task 10 - Handle the precision for non-custom conversion specifiers.
* Task 11 - Handle the 0 flag character for non-custom conversion specifiers.
* Task 12 - Handle the - flag character for non-custom conversion specifiers.
* Task 13 - Handle the following custom conversion specifier: r: prints the reversed string
* Task 14 - Handle the following custom conversion specifier: R: prints the rot13'ed string.


	Authors
* Ayokunle Ajisafe <https://github.com/kunle4luv>
* Jo-Anne Khang

