#include "shell.h"

/**
 * print_environ - prints all environment variables.
 * Return: nothing.
 */
void print_environ(void)
{
	int x;

	x = 0;
	while (environ[x])
		printf("%s\n", environ[x++]);
}
