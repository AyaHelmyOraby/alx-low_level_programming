#include"main.h"

/**
 * print_alphapet - utilizes on the _putchar function to print
 *                 the alphapet a -z
*/

void print_alphaprt(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
