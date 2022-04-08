#include <stdio.h>

/**
 * main - entry point
 *
 * Description:Print numbers 0 t09 on one line
 * Return: 0
 */
int main(void)
{
int i;
for (i = 0; i <= 9; ++i)
putchar('0' + i);

putchar('\n');

return (0);
}
