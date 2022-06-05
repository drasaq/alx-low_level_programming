#include <stdio.h>
/**
 * main - entry point
 * Description: print alphabets in lowercase
 *
 * Return: return every alphabet
*/
int main(void)
{
	char c

	for (c = 'a'; c <= 'z'; ++c)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
