#include<stdio.h>
/**
 * main - print alphabets except q and e
 * Return: Always 0 (succes)
*/
int main(void)
{
	char ch = 'a'

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}



