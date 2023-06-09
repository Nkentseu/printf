#include "main.h"

/**
 *_putb - Function that convert an int to binary
 *@num: The number to be convert
 *Return: number of the caracter printed
 */
int _putb(int num)
{
	int n = 0;

	if (num < 0)
		return (0);
	if (num < 2)
	{
		n = _putc('0' + num);
		return ((n < 0) ? 0 : n);
	}
	n += _putb(num / 2);
	return (n + _putc('0' + (num % 2)));
}
