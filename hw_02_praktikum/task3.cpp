#include <iostream>

using namespace std;

void sort(int* arr, int size)
{
	for (int k = 0; k < size; k++)
	{
		for (int i = 0; i < size - 1 - k; i++)
		{
			if (*(arr + i) > *(arr + i + 1))
			{
				int tmp = *(arr + i);
				*(arr + i) = *(arr + i + 1);
				*(arr + i + 1) = tmp;
			}
		}
	}
}

int main(int argc, char const *argv[])
{
	int arr[] = {2, -3, 5, 0, 8};
	int size = 5;

	sort(arr, size);

	for (int i = 0; i < size; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	return 0;
}