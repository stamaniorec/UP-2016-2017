#include <iostream>

using namespace std;

int element_at(int matrix[][5], int cols, int index)
{
	return matrix[index / cols][index % cols];
}

void sort(int matrix[][5], int n, int m)
{
	int size = n * m;
	for (int k = 0; k < size; k++)
	{
		for (int i = 0; i < size - 1 - k; i++)
		{
			if (element_at(matrix, m, i) > element_at(matrix, m, i + 1))
			{
				int temp = element_at(matrix, m, i);
				matrix[i / m][i % m] = element_at(matrix, m, i + 1);
				matrix[(i + 1) / m][(i + 1) % m] = temp;
			}
		}
	}
}

int main(int argc, char const *argv[])
{
	const int n = 6;
	const int m = 5;

	int matrix[n][m] = {
		{41, 42, 43, 44, 45},
		{21, 22, 23, 24, 25},
		{31, 32, 33, 34, 35},
		{61, 62, 63, 64, 65},
		{53, 52, 51, 55, 54},
		{11, 12, 13, 14, 15},
	};

	sort(matrix, n, m);

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}