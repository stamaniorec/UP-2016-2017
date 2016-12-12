#include <iostream>

using namespace std;

enum Product
{
	NEGATIVE,
	POSITIVE,
	ZERO
};

int main(int argc, char const *argv[])
{
	int a;
	Product product(POSITIVE);

	for(int i = 0; i < 3; ++i)
	{
		cin >> a;
		
		if (a < 0 && product != ZERO)
		{
			product = NEGATIVE;
		}
		else if (a == 0)
		{
			product = ZERO;
		}
	}

	if (product == NEGATIVE)
	{
		cout << "-";
	}
	else if (product == ZERO)
	{
		cout << "0";
	}
	else
	{
		cout << "+";
	}

	return 0;
}