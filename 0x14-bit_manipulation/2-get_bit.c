#include "main.h"
/**
 * get_bit - a function that returns the value of a bit at a given index.
 * @n:the number to be analysed to extract a specifi c bit.
 * @index: the index starting from 0 of the bit u want to retrieve.
 * Return: the value of the bit at index index or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int m;/*bitmask has only the bit at specified set to 1*/

	/* the if function checks if the provided index is >= the total no,
	 * of bits in unsigned long int*/
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);/*meaning its out of range*/
	}

	m = 1UL << index;/* valid range retrieve the value of bit at the index*/
	return ((n & m) != 0);/* if the bit at specified index in n is 1 result
				 will be non-zero else will be 0"*/
}
