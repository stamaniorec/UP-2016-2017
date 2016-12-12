#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	char c;
	cin >> c;

	if (c >= 'a' && c <= 'z')
	{
		cout << "Malka bukva" << endl;
	}
	else if (c >= 'A' && c <= 'Z')
	{
		cout << "Golqma bukva" << endl;
	}
	else if (c >= '0' && c <= '9')
	{
		cout << "Desetichna cifra" << endl;
	}

	// I chose if because it's as straightforward as it gets.
	// Look at it, it's beautiful.
	// Who could object?

	return 0;
}