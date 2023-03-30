#include "main.h"

/**
 * _leng - leng of string
 * @str: string
 * Return: leng of str
 */
int _leng(char *str)
{
	if (str == 0)
		return (-1);
	return ((str[0] == '\0') ? 0 : 1 + _leng(str));
}
