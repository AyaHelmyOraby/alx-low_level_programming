#include<stdio.h>

/**
 * main -Entry point
 *
 * Description: print all alphapet letters except q and e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
			ch++;
		putchaar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
