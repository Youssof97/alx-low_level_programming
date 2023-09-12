#include <unistd.h>
#include "main.h"

/**
 * main - entry point of the program
 *
 * Return: Always 0 (sucess)_.
 */

int main (void);
{
	char *word = "_putchar\n";
	int i ;

	for (i = 0; i < 9; i++)
	{
		_putchar(word[i]);

	}

	return(0)

}
