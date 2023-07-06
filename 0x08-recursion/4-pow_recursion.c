#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the value of y
 * @x: base
 * @y: exponent
 * Return: pointer to the byte in 's' that matches on of the bytes in 'accept'
 * or NULL i no match byte is found
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);
	
	return (x * _pow_recursion(x, y - 1));
}
