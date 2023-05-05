#include "main.h"
/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: no return.
 */
void print_number(int n)
{
	unsigned int f, d, count;

	if (n < 0)
	{
		_putchar(45);
		f = n * -1;
	}
	else
	{
		f = n;
	}

	d = f;
	count = 1;

	while (d > 9)
	{
		d /= 10;
		count *= 10;
	}

	for (; count >= 1; count /= 10)
	{
		_putchar(((f / count) % 10) + 48);
	}
}
