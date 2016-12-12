#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	for (int i = 100; i < 1000; i++)
	{
		int first_digit = i % 10;
		int second_digit = (i / 10) % 10;
		int third_digit = i / 100;

		if (first_digit != second_digit &&
			first_digit != third_digit &&
			second_digit != third_digit)
		{
			cout << i << endl;
		}
	}

	return 0;
}