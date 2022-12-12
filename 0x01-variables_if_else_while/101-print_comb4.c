#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 *
 * Return: Always 0 (success)
 *
 */
int main(void)

{
	int ones = '0';
	int tens = '0';
	int hundreds = '0';

	for (hundreds = '0'; hundreds <= '9'; hundreds++)/* prints hundreds digit*/
	{
		for (tens = '0'; tens <= '9'; tens++)
		{
			if (!((ones == tens) || (tens > ones) || (tens > ones) || (hundreds > tens)))/*eliminates repitition*/
			{
				putchar(hundreds);
				putchar(tens);
				putchar(ones);
				if (!(ones == '9' && hundreds == '7' && tens == '8'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
