#include <iostream>
#include <limits>

using namespace std;

int main(int argc, char const *argv[])
{
	int a;
	int max = numeric_limits<int>::min();

	for(int i = 0; i < 5; ++i)
	{
		cin >> a;
		
		if (a > max)
		{
			max = a;
		}
	}
	
	cout << max;

	return 0;
}