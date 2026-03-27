#include "main.h"
/**
 * print_char - Prints a character to the standard output
 * @args: List of variadic arguments
 *
 * Return: Number of characters printed (always 1)
 */
int print_char(va_list args)
{
	char c;

	c = va_arg(args, int);
	return (write(1, &c, 1));
}
