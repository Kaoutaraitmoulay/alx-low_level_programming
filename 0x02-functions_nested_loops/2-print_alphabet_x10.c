#include "main.h"
/**
 * print_alphabet_x10 - _putchar alphabets
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int j = 0;
	char alpha = 'a';

	while (j < 10)
	{
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
		j++;
		alpha = 'a';
	}
}
