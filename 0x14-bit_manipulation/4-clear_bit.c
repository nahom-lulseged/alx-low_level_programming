#include"main.h"

/**
 * Return:1 for success, or -1 for  error
 */

int clear_bit(unsigned long int *n,unsigned int index)
{
	if (index > 63)
		return (-1);
	*n =(~(1UL << index) & *n);
	return(1)
}
