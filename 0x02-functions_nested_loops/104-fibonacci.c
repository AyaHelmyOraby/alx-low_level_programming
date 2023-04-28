#include "main.h"

/**
 * numlength -return the length of string
 *
 * @num: operand number
 *
 * Return: number of digits
*/

int numlength(int num)
{
	int length = 0;

	if (!num)
		return (1);

	while (num)
	{
		num =  num / 10;
		length += 1;
	}

	return (length);
}

/**
* main -Entry point
*
* Description: print the first 98 fibonacci numbers
*       starting with 1 and 2 followed by a new line
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int count, initial;
	unsigned long f1 = 1, f2 = 2, sum, mx = 100000000, f1a = 0, f2a = 0, suma = 0;

	for (count = 1; count <= 98; count++)
	{
		if (fla > 0)
			printf("%lu", f1a);
		initial = numlength(mx) - 1 - numlength(f1);

		while (f1a > 0 && initial > 0)
		{
			printf("%lu", f1);

			sum = (f1 + f2) % mx;
			suma = f1a + f2a + (f1 + f2) / mx;
			f1 = f2;
			f1a = f2a;
			f2 = sum;
			f2a = suma;

			if (count != 98)
				printf(", ");
			else
				printf("\n");
		}
		return (0);
	}
}
