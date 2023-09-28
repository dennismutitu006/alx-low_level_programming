#include "main.h"
/**
 * binary_to_uint - a function that converts a binary no. to an unsigned int.
 * @b: a points to a string of 0 and 1 chars
 * Return: the converted number or 0 if there is one or more chars in the
 * string b that is not 0 0r 1 or if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int k = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')/*while b is not equal to null terminator*/
	{
		if (*b != '0' && *b != '1')
		{	return (0);

		}

		k = k * 2 + (*b - '0');
		b++;
	}
	return (k);
}
