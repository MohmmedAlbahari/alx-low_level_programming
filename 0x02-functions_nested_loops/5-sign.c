#include "main.h"

/**
 * print_sign - print the sign of a num
 * @n: the num to be checked
 * Return: 1 and 0 and -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-1');
		return (-1);
	}
}


