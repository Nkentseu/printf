#include "main.h"
#include <limits.h>

/**
 * _puti - print the integer number
 * @number: the number was printing
 * Return: number of digit print
 */
int _puti(int number)
{
	if (number < 0)
	{
		int n = _putc('-');

		if (n == INT_MIN)
		{
			n += _puti(-(number / 10));
			n += _putc('0' + (-(number % 10)));
		}
		else
			n += _puti(-number);
		return (n);
	}
	else
	{
		int n = 0;

		if (number <= 9)
			return (_putc('0' + number));
		n += _puti(number / 10);
		n += _putc('0' + (number % 10));
		return (n);
	}
}
