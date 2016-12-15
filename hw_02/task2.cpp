#include <iostream>

using namespace std;

const int n = 6;
const int m = 5;

void print_element_at(int matrix[][m], int index)
{
	cout << matrix[index / m][index % m] << endl;
}

int main(int argc, char const *argv[])
{
	int matrix[n][m] = {
		{11, 12, 13, 14, 15},
		{21, 22, 23, 24, 25},
		{31, 32, 33, 34, 35},
		{41, 42, 43, 44, 45},
		{51, 52, 53, 54, 55},
		{61, 62, 63, 64, 65}
	};

	int index;
	cin >> index;

	if (index < 0 || index >= n * m)
	{
		cerr << "invalid index" << endl;
		return -1;
	}

	print_element_at(matrix, index);

	return 0;
}