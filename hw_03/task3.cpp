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

		if (cur_char == 'T')
		{
			cout << "Found at position " << (i + 1) << endl;
			return;
		}

		i++;
	}

	cout << "Not found" << endl;
}

int main(int argc, char const *argv[])
{
	solve();

	return 0;
}