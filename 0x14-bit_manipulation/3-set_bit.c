#include "main.h"
/**
 * set_bit - this function that sets the value of a bit to 1 at a given index.
 * @n: a pointer to unsigend long int.
 * @index: the index starting from 0 of the bit u want to set.
 * Return: 1 if it worked or -1 if an error occured.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int j;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);/*is out of range*/
	}

	j = 1UL << index;/* is within the give range*/
	*n |= j;

	return (1);
}
