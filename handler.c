#include "main.h"
/**
 * print_pourcent - affiche le caractère '%'
 *
 * Return: 1
 */
int print_pourcent(void)
{
	char pourcent = '%';

	write(1, &pourcent, 1);
	return (1);
}
/**
 * print_string - affiche une chaine de caractères
 * @args: liste des arguments variadiques
 *
 * Return: le nombre de caractères affichés
 */
int print_string(va_list args)
{
	char *string = va_arg(args, char *);
	int i = 0;

	while (string[i] != '\0')
	{
		write(1, &string[i], 1);
		i++;
	}
		return (i);
}
/**
 * print_char - affiche un caractère
 * @args: liste des arguments variadiques
 *
 * Return: 1
 */
int print_char(va_list args)
{
	char c = va_arg(args, int);

	write(1, &c, 1);
	return (1);
}
/**
 * print_int - affiche un entier
 * @args: liste les arguments contenant un entier à afficher
 *
 * Return: Le nombre de caractère afficher.
 */
int print_int(va_list args)
{
	int num = va_arg(args, int);

	return (print_number(num));
}
/**
 * handler_format - gère les specifiers de format
 * @specifier: le caractère après le '%'
 * @args: liste des arguments variadiques
 *
 * Return: le nombre de caractères affichés, -1 si specifier inconnu
 */
int handler_format(char specifier, va_list args)
{
	switch (specifier)
	{
		case '%':       /** affiche un % */
			return (print_pourcent());
		case 'c':       /** lis un caractère */
			return (print_char(args));
		case 's':       /** lis une chaîne de caractère */
			return (print_string(args));
		case 'd':		/** lis un en base décimal 10 */
		case 'i':		/** lis un entier */
			return (print_int(args));
		default:
			return (-1); /** Signale un specifier inconnu */
	}
}
