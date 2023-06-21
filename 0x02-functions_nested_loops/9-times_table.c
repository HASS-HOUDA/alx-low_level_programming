#include "main.h"
/**
 * times_table - prints the 9 times table
 *
*/
void times_table(void)
{
	int num, mult, prod;

	for (num = 0; num <= 9; num++)
	{
		_putchar(',');
		_putchar(' ');
	}
	for (mult = 0; mult <= 9; mult++)
	{
		prod = num * mult;
		if (prod <= 9)
			_putchar(' ');
		else
			_putchar((prod / 10) + 48);
		_putchar((prod % 10) + 48);
	}
	_putchar((prod % 10) + 48);
}
