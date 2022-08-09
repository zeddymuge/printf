#include "main.h"

/**
 * add_str - adds a given string to a given buffer
 * @ap: va_list containing the string to add
 * @buffer: character buffer
 * @i: index from which to start adding to buffer
 *
 * Return: number of characters added
 */
int add_str(va_list ap, char *buffer, int i)
{
	char *str = va_arg(ap, char *);

	if (!str)
		return (copy_to_buff("(null)", buffer, i));
	else
		return (copy_to_buff(str, buffer, i));
}

/**
 * add_str_print - adds a given string to a given buffer
 * replacing unprintable characters accordingly
 * @ap: va_list containing the string to add
 * @buffer: character buffer
 * @i: index from which to start adding to buffer
 *
 * Return: number of characters added
 */
int add_str_print(va_list ap, char *buffer, int i)
{
	char *str = va_arg(ap, char *);
	char *hex;
	int j, k;

	if (!str)
		return (copy_to_buff("(null)", buffer, i));

	for (j = 0, k = 0; str[j] != '\0'; j++, i++)
	{
		if (str[j] < 32 || str[j] >= 127)
		{
