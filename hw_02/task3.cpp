#include <iostream>

using namespace std;

void spiral_fill(int **matrix, int n)
{
	int bound_right = n;
	int bound_left = 0;
	int bound_bottom = n;
	int bound_top = 0;

	int counter = 1;
	while (counter <= n * n)
	{
		for (int i = bound_left; i < bound_right; ++i)
		{
			matrix[bound_top][i] = counter++;
		}
		bound_top++;

		for (int i = bound_top; i < bound_bottom; ++i)
		{
			matrix[i][bound_right - 1] = counter++;
		}
		bound_right--;

		for (int i = bound_right - 1; i >= bound_left; --i)
		{
			matrix[bound_bottom - 1][i] = counter++;
		}
		bound_bottom--;

		for (int i = bound_bottom - 1; i >= bound_top; --i)
		{
			matrix[i][bound_left] = counter++;
		}
		bound_left++;
	}
}

int** new_square_matrix(int n)
{
	int** matrix = new int*[n];

	for (int i = 0; i < n; ++i)
	{
		matrix[i] = new int[n];
	}

	return matrix;
}

void free_square_matrix(int** matrix, int n)
{
	for (int i = 0; i < n; ++i)
	{
		delete[] matrix[i];
	}

	delete[] matrix;
}

void print_matrix(int** matrix, int rows, int cols)
{
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;

	int** matrix = new_square_matrix(n);

	spiral_fill(matrix, n);
	print_matrix(matrix, n, n);

	free_square_matrix(matrix, n);
	
	return 0;
}