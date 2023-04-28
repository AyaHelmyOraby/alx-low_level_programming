#include "main.h"

/**
* times_table - Prints the 9 times table
*
*
*
* Return: no return
*
*/

void times_table(void)

{
	int a, b, op;

	for (a = 0; a <= 9; a++)
	{
		_putchar(48);
		for (b = 1; b <= 9; b++)
		{
			_putchar(',');
			_putchar(' ');

			op = a * b;

			if (op <= 9)
			{
				_putchar(' ');
			}
			else
				_putchar((op / 10) + 48);

			_putchar((op % 10) + 48);
		}
			_putchar('\n');
		}
}
