#include "main.h"
/**
 * print_number - prints an integer using write
 * @num: the integer to print
 *
 * Return: the number of characters printed
 */
int print_number(int num)
{
	unsigned int n;
	int count = 0;
	char digit;

	/* 1. Handle negative numbers */
	if (num < 0)
	{
		count += write(1, "-", 1);
		n = -num;
	}
	else
		n = num;

	/* 2. Go to the next digit to the left recursive way */
	if (n / 10)
		count += print_number(n / 10);

	/* 3. convert the current digit to ASCII and print it */
	digit = (n % 10) + '0';
	count += write(1, &digit, 1);

	return (count);
}
