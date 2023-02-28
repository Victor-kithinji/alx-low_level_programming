#include <stdio.h>

/**
  * _puts - Prints a string
  * @str: The string to print
  *
  * Return: void
  */
void print_rev(char *s)
{
	for (; *s != '\0'; s++)
	{
		putchar(*s);
	}

	putchar('\n');
}
