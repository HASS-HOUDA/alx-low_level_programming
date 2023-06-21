#include "main.h"
/**
 * _abs - computes the absolute value o an integer
 *
 * @n: the integer
 *
 * Return: the absolute value
*/
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
