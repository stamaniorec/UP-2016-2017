#include <iostream>
#include <cmath>

using namespace std;

const int min_size = 5;
const int max_size = 105;

void enter_matrix(int matrix[][max_size], int n)
{
	for (int i = 0; i < n; ++i)
	{
		cin >> matrix[0][i];
		cin >> matrix[1][i];
	}
}

void solve(int matrix[][max_size], int n)
{
	for (int i = 0; i < n; ++i)
	{
		cout << floor(((double)matrix[0][i] / matrix[1][i]) * 100) << "%" << endl;
	}
}

int main(int argc, char const *argv[])
{
	int matrix[2][max_size];

	int n;
	cin >> n;

	if (n < min_size || n > max_size)
	{
		cerr << "n not in range" << endl;
		return -1;
	}

	enter_matrix(matrix, n);

	solve(matrix, n);
	
	return 0;
}