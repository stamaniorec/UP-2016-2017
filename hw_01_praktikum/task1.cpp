#include <iostream>

int main(int argc, char const *argv[])
{
	// declare variables so the program will compile
	int x, y, z;
	double r;

	bool a = x > y ? x : y;

	bool b = x <= y ? (x <= z ? x : z) : (y <= z ? y : z);

	bool c = (x % 10 == 5 && (x / 10) % 10 == 5 && x / 100 != 5) ||
			(x % 10 == 5 && x / 100 == 5 && (x / 10) % 10 != 5) ||
			((x / 10) % 10 == 5 && x / 100 == 5 && x % 10 != 5);

	bool d = x != y && y != z && x != z;

	bool e = r != -1 && r != 2;

	return 0;
}
