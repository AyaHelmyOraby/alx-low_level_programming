#include "main.h"
/**
 *_strlen-Finds the length of a string.
 *@s:String pointer to the string whose length is to be found.
 *Return: returns the length of the string.
 */

int _strlen(char *s)
{
	int n = 0;
	/incremeant up to when the last character is NULL,\0/
	while (*(s + n) != 0)
	{
		n++;
	}
	return (n);
}
