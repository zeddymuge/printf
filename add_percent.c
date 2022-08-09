#include "main.h"

/**
 * add_percent - adds a % to a given buffer
 * @ap: va_list containing the character to add
 * @buffer: character buffer
 * @x: index from which to start adding to buffer
 *
 * Return: 1(number of characters added)
 */
int add_percent(va_list ap, char *buffer, int x)
{
	(void)ap;

	buffer[x] = '%';

	return (1);
}