#include "main.h"
/**
 * print_chessboard - a function that prints the chessboard
 * @a: 2d array of chars
 *
 * Return: nothing
 */
void print_chessboard(char (*a)[8])
{
	int j, k;

	for (j = 0; j < 8; j++)
	{
		for (k = 0; k < 8; k++)
		{
			_putchar(a[j][k]);
		}

	_putchar('\n');
	}
}
