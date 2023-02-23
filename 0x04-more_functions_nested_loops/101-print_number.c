#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 */
void print_number(int n)
{
unsigned int n1;

if (n < 0)
{
n1 = -n;
_putchar('-');
} else
{
n1 = n;
}

if (n1 / 10)
{
print_number(n1 / 10);
}

_putchar((n1 % 10) + '0');
}
 BIN +16.5 KB 
0x04-more_functions_nested_loops/101-print_numbers
Binary file not shown.
 14  
0x04-more_functions_nested_loops/2-main.c
@@ -0,0 +1,14 @@
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    printf("%d\n", mul(98, 1024));
    printf("%d\n", mul(-402, 4096));
    return (0);
}
