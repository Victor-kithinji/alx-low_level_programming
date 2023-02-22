#include <stdio.h>
#include "holberton.h"

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 */
int main()
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++){
		
		_putchar(letter);
	}

	_putchar('\n');
	return 0;
}
