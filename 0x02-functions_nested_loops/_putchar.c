#include "main.h"
#include <unistd.h>
/**
 * main - write the character c to std out
 * @c the character to print
 * Return: 0 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
