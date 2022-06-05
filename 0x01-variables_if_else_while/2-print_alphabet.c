#include <stdio.h>
/**
* main - Entry point
* Description: print all alphabets in lowercase
*
* Return: return all the alphabets
*/

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
