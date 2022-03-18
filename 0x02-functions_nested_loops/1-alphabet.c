#include "main.h"
/**
 *main - entry point
 *
 *Return: Always 0 (Success)
 *
 */
void print_alphabet(void)
{
	char alphabet;

	for (alphabbet = 'a'; alphabet <= 'z'; alphabet++)
		_putchar(alphabet);
	_putchar('\n');
	return (0);
}
