#include <iostream>
#include <cmath>

using namespace std;

const int MAX_INPUT_LENGTH = 256;

void solve()
{
	char str[MAX_INPUT_LENGTH];

	char cur_char;
	int i = 0;
	while (!cin.eof())
	{
		cin.get(cur_char);
		if (cur_char == '\n')
			break;

		str[i++] = cur_char;
	}

	cout << "Num chars: " << i << endl;
	cout << "First char: " << str[0] << endl;
	cout << "Middle char: " << str[i / 2] << endl;
	cout << "Last char: " << str[i - 1] << endl;
}

int main(int argc, char const *argv[])
{
	solve();

	return 0;
}