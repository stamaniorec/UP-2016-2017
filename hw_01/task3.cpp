#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int a, b;
	cin >> a >> b;

	int sum = a + b;

	cout << (sum % 2 == 0 ? sum * 2 : sum / 2);

	return 0;
}