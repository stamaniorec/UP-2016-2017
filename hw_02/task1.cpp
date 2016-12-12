#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
	const int max_size = 105;

	int matrix[2][max_size];

	int n;
	cin >> n;

	if (n < 5 || n > 105)
	{
		cerr << "n not in range" << endl;
		return -1;
	}

	for (int i = 0; i < n; ++i)
	{
		cin >> matrix[0][i];
		cin >> matrix[1][i];
	}

	for (int i = 0; i < n; ++i)
	{
		cout << floor(((double)matrix[0][i] / matrix[1][i]) * 100) << "%" << endl;
	}
	
	return 0;
}