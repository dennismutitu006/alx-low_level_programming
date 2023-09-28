#include "main.h"
/**
 * get_endianness - a function that checks the endianness of the machine its
 * runnig on.
 * endianness refers to the byte order in memory specifically whether the most
 * signifuicant byte(MSB) comes 1st or the least significat byte comes 1st.
 * Return: 0 if big endian or 1 if little endian.
 */
int get_endianness(void)
{
	unsigned int o = 1;
	unsigned char *bp = (unsigned char *)&o;/*declare and assign &o*/

	return (*bp == 1);/*if bp is = 1 means the 1st byte in the memory rep*/
	/* o is 1  suggesting that the leasts signifcant byte comes 1st*/
	/* hence indicating little endian else if 0 big endian*/
}
