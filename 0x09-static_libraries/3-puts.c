#include "main.h"
void _puts(char *str)
{
	int k = 0;

	while (str[k] != '\0')
	{
		_putchar(str[k]);
		k++;
	}
	_putchar('\n');
}
