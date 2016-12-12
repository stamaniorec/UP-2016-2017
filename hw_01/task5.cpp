#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int a;
	cin >> a;

	switch(a)
	{
		case 1:
		case 2:
		case 3:
			cout << a * 10;
			break;
		case 4:
		case 5:
		case 6:
			cout << a * 100;
			break;
		case 7:
		case 8:
		case 9:
			cout << a * 1000;
			break;
		default:
			cout << "Invalid input";
	}

	return 0;
}