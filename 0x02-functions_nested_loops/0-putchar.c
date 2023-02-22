#include <stdio.h>
#include "main.h"

/**
  * print_alphabet - Make the alphabet
  *
  * Return: 0
  */
int main(int argc, char *argv[])
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');
	return 0;
}
