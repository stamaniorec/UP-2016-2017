#include <iostream>
#include <cmath>

using namespace std;

void solve()
{
	char end_char;
	cin >> end_char;

	int num_asterixes = 0;

	for (char cur_char = 'A'; cur_char <= end_char; cur_char++)
	{
		cout << cur_char;

		for (int j = 0; j < num_asterixes; ++j)
		{
			cout << "*";
		}
		
		if (num_asterixes > 0)
		{
			cout << cur_char;
		}

		cout << endl;

		num_asterixes += (num_asterixes == 0 ? 1 : 2);
	}

	num_asterixes -= 2;

	for (char cur_char = end_char - 1; cur_char >= 'A'; cur_char--)
	{
		cout << cur_char;

		num_asterixes -= 2;

		for (int j = 0; j < num_asterixes; ++j)
		{
			cout << "*";
		}
		
		if (num_asterixes > 0)
		{
			cout << cur_char;
		}

		cout << endl;
	}
}

int main(int argc, char const *argv[])
{
	solve();

	return 0;
}