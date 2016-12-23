#include <iostream>
#include <cmath>

using namespace std;

int count_inversions(int* arr, int size)
{
	int count = 0;

	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (*(arr + j) < *(arr + i))
			{
				count++;
			}
		}
	}

	return count;
}

int main(int argc, char const *argv[])
{
	int arr[] = {1, 3, -5, 9, 6};
	int size = 5;

	cout << count_inversions(arr, size) << endl;

	return 0;
}