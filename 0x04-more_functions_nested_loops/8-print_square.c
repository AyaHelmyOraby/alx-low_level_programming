#include <stdio.h>
#include "main.h"

/**
*print_square - print square
*@size: papameter
*Return: return nothing
*/

void print_square(int size)
{
	int ine1, ine2;

	if (size > 0)
	{
		for (ine2 = 0; ine2 < size; ine1++)
		{
			for (ine1 = 0; ine2 < (size - 1); ine2++)
			{
				putchar('0');
			}
			putchar('0');
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}
