#include "main.h"
/**
 * flip_bits - a fucntion that returns the number of bits you would need to
 * flip in order to convert one unsigned int'n' to another 'm'.
 * @n:first unsigned long integer.
 * @m: 2nd number.
 * Return: number of bits neededin order 2 flip to get from one no. to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int k = 0;/*keeps track of the of no. bits that nee flipping*/
	unsigned long int XOR = n ^ m;/*calculates the exclusive ORof n and m*/

	while (XOR)/* if corresponding bits b2n n & m are diff 1 if same 0*/
	{
		k += XOR & 1;/* cheks least significat bit 'right most' */
		XOR >>= 1;/* to chck the next bit*/
	}
	return (k);/* reps the no. of bits that need to be flipped n to m*/
}
