/*
	Two Dimensional Array Practice
	TA: Brian Choi (schoi@cs.ucla.edu)

	Solutions by: Gavin Finn

	Your job in this exercise is to replace the
	comment // TODO: Fill in the grid.
	with code that fills in grid[][] that
	matches the target output.

	For example, if the target output is:

		 1  2  3  4  5
		 6  7  8  9 10
		11 12 13 14 15
		16 17 18 19 20
		21 22 23 24 25

	your code will look:

		for (int i = 0; i < SIZE; i++)
		{
			for (int j = 0; j < SIZE; j++)
			{
				grid[i][j] = i * SIZE + j + 1;
			}
		}

	The only requirement is that your code must work with any positive SIZE value
	to generate the pattern. You may use a for loop, a while loop, or a combination
	of several loops. You can also create whatever variables you can. Some problems may not be as easy as
	they seem... Have fun!
*/

#include <iomanip>
#include <iostream>
using namespace std;
const int SIZE = 5;
// Print the 5x5 grid.
void printGrid(int grid[][SIZE]);

int main()
{
	int grid[SIZE][SIZE];

	/*
	Problem 1:

		0 1 2 3 4
		0 1 2 3 4
		0 1 2 3 4
		0 1 2 3 4
		0 1 2 3 4

		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				grid[i][j] = j;
			}
		}

*/



/*
	Problem 2:

		0 0 0 0 0
		1 1 1 1 1
		2 2 2 2 2
		3 3 3 3 3
		4 4 4 4 4

		for (int i = 0; i < SIZE; i++)
		{
			for (int j = 0; j < SIZE; j++)
			{
				grid[i][j] = i;
			}
		}

*/


/*
	Problem 3:

		 5  4  3  2  1
		10  9  8  7  6
		15 14 13 12 11
		20 19 18 17 16
		25 24 23 22 21

		for (int i = 0; i < SIZE; i++)
		{
			for (int j = 0; j < SIZE; j++)
			{
				grid[i][j] = (i + 1) * 5 - j;
			}
		}
*/




/*
	Problem 4:

		21 22 23 24 25
		16 17 18 19 20
		11 12 13 14 15
		 6  7  8  9 10
		 1  2  3  4  5
*/

/*
	Problem 5:

		25 24 23 22 21
		20 19 18 17 16
		15 14 13 12 11
		10  9  8  7  6
		 5  4  3  2  1
*/

/*
	Problem 6:

		1  6 11 16 21
		2  7 12 17 22
		3  8 13 18 23
		4  9 14 19 24
		5 10 15 20 25
*/

/*
	Problem 7:

		 1  2  3  4  5
		10  9  8  7  6
		11 12 13 14 15
		20 19 18 17 16
		21 22 23 24 25
*/

/*
	Problem 8:

		1 10 11 20 21
		2  9 12 19 22
		3  8 13 18 23
		4  7 14 17 24
		5  6 15 16 25
*/

/*
	Problem 9:

		 1  2  3  4  5
		16  6  7  8  9
		17 18 10 11 12
		19 20 21 13 14
		22 23 24 25 15
*/

/*
	Problem 10:

		 1  2  3  4  5
		10  6  7  8  9
		14 15 11 12 13
		18 19 20 16 17
		22 23 24 25 21
*/

/*
	Problem 11:

		 1  3  6 10 15
		 2  5  9 14 19
		 4  8 13 18 22
		 7 12 17 21 24
		11 16 20 23 25
*/

/*
	Problem 12:

		3 3 3 3 3
		3 2 2 2 3
		3 2 1 2 3
		3 2 2 2 3
		3 3 3 3 3

*/

/*
	Problem 13:
	13 (Spiral): See if you can generate the following spiral pattern.

																	SIZE = 7
									SIZE = 6
			SIZE = 5											1  2  3  4  5  6  7
								 1  2  3  4  5  6				24 25 26 27 28 29  8
		 1  2  3  4 5			20 21 22 23 24  7				23 40 41 42 43 30  9
		16 17 18 19 6			19 32 33 34 25  8				22 39 48 49 44 31 10
		15 24 25 20 7			18 31 36 35 26  9				21 38 47 46 45 32 11
		14 23 22 21 8			17 30 29 28 27 10				20 37 36 35 34 33 12
		13 12 11 10 9			16 15 14 13 12 11				19 18 17 16 15 14 13
*/

/*
	Problem 14:
	(Magic Square): Assuming SIZE is an odd positive integer, create a magic square. In a magic
square of size SIZE, integers from 1 to SIZE2 are arranged in a SIZE x SIZE square matrix such that
the SIZE numbers in all rows, all columns, and both diagonals sum to the same constant.
Hint: See http://en.wikipedia.org/wiki/Siamese_method for an algorithm for this.

																	SIZE = 7

									SIZE = 5					30 39 48  1 10 19 28
																38 47  7  9 18 27 29
		SIZE = 					17 24  1  8 15					46  6  8 17 26 35 37
								23  5  7 14 16					 5 14 16 25 34 36 45
		8 1 6					 4  6 13 20 22					13 15 24 33 42 44  4
		3 5 7					10 12 19 21  3					21 23 32 41 43  3 12
		4 9 2					11 18 25  2  9					22 31 40 49  2 11 20
*/



	printGrid(grid);
}
void printGrid(int grid[][SIZE])
{
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			cout << setw(2) << grid[i][j] << " ";
		}
		cout << endl;
	}
}

