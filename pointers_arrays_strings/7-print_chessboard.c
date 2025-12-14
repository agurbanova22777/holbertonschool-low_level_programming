#include "main.h"

/**
 * print_chessboard - Prints the chessboard.
 * @a: A pointer to an 8x8 array of characters representing the board.
 *
 * Description: This function takes a 2D array (8x8) and prints its
 * contents to the standard output, character by character, row by row.
 * Each row is followed by a newline.
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int row, col;

	/* Outer loop for the rows (from 0 to 7) */
	for (row = 0; row < 8; row++)
	{
		/* Inner loop for the columns (from 0 to 7) */
		for (col = 0; col < 8; col++)
		{
			/* Print the character at the current row and column */
			_putchar(a[row][col]);
		}
		/* After printing a full row, print a newline character */
		_putchar('\n');
	}
}
