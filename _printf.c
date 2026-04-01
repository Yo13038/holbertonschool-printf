#include "main.h"
/**
 * _printf - Produces output according to a format
 * @format: Character string containing the directives
 *
 * Return: The number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, count = 0, printed = 0;

	/* Check if format string is NULL or an empty '%' */
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);

	va_start(args, format);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++; /* Move to the character after '%' */

			/* Call the handler function */
			printed = handler_format(format[i], args);

			if (printed == -1) /* If specifier is unknown (e.g., %r) */
			{
				/* Print the '%' and the unknown character as literal text */
				count += write(1, &format[i - 1], 1);
				count += write(1, &format[i], 1);
			}
			else
			{
				/* Add the number of characters printed by the handler */
				count += printed;
			}
		}
		else
		{
			/* Print standard characters one by one */
			count += write(1, &format[i], 1);
		}
		i++;
	}
	va_end(args);
	return (count);
}