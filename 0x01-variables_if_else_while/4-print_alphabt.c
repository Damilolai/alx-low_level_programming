#include <stdio.h>
#include <stdlib.h>

/**
 *main- Write a program that prints the alphabet in lowercase,
 *followed by a new line except q and e
*Return: 0 (success)
 */

int main(void)

{
	char letter = 'a';

	while (letter <= 'z')

{
	if (letter != 'e' && letter != 'q')
{
	putchar(letter);
}

	letter++;
}

	putchar('\n');

	return (0);
}
