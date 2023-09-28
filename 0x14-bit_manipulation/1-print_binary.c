#include "main.h"
/**
 * print_binary - this is a function that prints the binary representation
 *  of a number.
 * @n: the unsigned long int to be represented in binary and displayed.
 * Description:not allowed to use arrays, malloc, % or / operators.
 */
void print_binary(unsigned long int n)
{
	unsigned long int m;/*used as a bitmask intilized to have 1 in leftmos*/
	int l = 1;/*leading zeros should be printed until the 1st one is foun*/

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	m = 1UL << (sizeof(unsigned long int) * 8 - 1);

	while (m)
	{
		if (n & m)/*checks if both are non zero*/
		{
			l = 0;
			_putchar('1');
		} else if (!l)/*means wehave encounterd the 1*/
		{
			_putchar('0');
		}
		m >>= 1;/*shifts the bitmask to right by 1*/
	}
}
