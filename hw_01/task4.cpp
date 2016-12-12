#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int a, b;
	cin >> a >> b;

	int c = a > b ? a : b;
	c = c < 0 ? c * -1 : c;

	cout << c;

	return 0;
}