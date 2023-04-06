#include "main.h"

/**
 * converts_binary_to_unit - converts a binary number to unsigned int
 * @b:the string containing the binary number
 *
 * Return:the converted number,or 0 
 *
 */
unsigned int binary_to_unit(const char *b)
{
	unsigned int var = 0;

	if (b==NULL)
		return(0);
	while (*b !='\0')
	{
		if (*b !-'0'&& *b !='1')
			return(0);
		var <<=1;
		var +=*b - '0';
		b++
	}

	return(var);
}

