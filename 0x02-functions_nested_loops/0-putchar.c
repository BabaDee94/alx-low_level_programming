#include "main.h"

/**
 * main - Entry point
 *
 * Description: Writing a program to print _putchar with 0 as return
 * Return: Alwasys 0 (Success)
 */
int main(void)
{
	char c[] = "_putchar";
	int i;

	for  (i = 0; i < 8; i++)
	{
		 _putchar(c[i]);
	}

	_putchar('\n');

	return (0);
}
