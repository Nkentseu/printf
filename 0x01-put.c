#include "main.h"
#include <unistd.h>
/**
 *_putc - Function that print caracter
 *@c: A caracter
 *Return: void
 */
int _putc(char c)
{
	int n = (write(1, &c, 1));

	return ((n <= 0) ? 0 : 1);
}
/**
 *_puts - Function that print string
 *@str: String to print
 *Return: Number of caracter printed
 */
int _puts(char *str)
{
	int i = 0;
	int n = 0;

	if (str == 0)
		return (0);
	while (str[i] != '\0')
	{
		n += _putc(str[i]);
		i++;
	}
	return (n);
}
