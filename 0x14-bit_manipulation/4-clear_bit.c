#include "main.h"
/**
 * clear_bit - this function  sets the value of a bit to 0 at give index.
 * @n: a pointer unsigend lon int to be set 0 or cleared.
 * @index: the index starting from 0 of the bit u want to set.
 * Return: 1 if it worked 0 if an error occured.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int k;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	k = ~(1UL << index);
	*n &= k;

	return (1);
}
