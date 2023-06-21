#include "main.h"

/**
 * print -alphabet - print all alphabet in lower case
 * Return: 0 (success)
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
