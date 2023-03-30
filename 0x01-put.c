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

	return ((n < 0) ? -1 : n);
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
	char null[] = "(null)";

	if (str == 0)
	{
		for (i = 0; i < 6; i++)
			_putc(null[i]);
		return (6);
	}
	while (str[i] != '\0')
	{
		int p = _putc(str[i]);

		if (p < 0)
			return (n);
		n += p;
		i++;
	}
	return (n);
}
