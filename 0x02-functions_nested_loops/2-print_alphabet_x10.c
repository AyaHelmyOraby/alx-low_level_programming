#include "main.h"
/**
* print_alphapet_x10 -Prints the alphapet 10 times
*
* Return: Always 0 (Success)
*/
void print_alphapet_x10(void)
{
	int i;
	char j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
