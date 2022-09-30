#include "main.h"

/**
 * _puts - print a string, followed bt a new line, to stout.
 * @str: input string.
 * Return: no return.
 */
void _puts(char *str)
{
	int count = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[count]);
		count++;
	}
}
