#include <iostream>
#include <cmath>

using namespace std;

void solve()
{
	char end_char;
	cin >> end_char;

	for (char cur_char = 'A'; cur_char <= end_char; cur_char++)
	{
		for (char c = cur_char; c >= 'A'; c--)
		{
			cout << c;
		}

		cout << endl;
	}
}

int main(int argc, char const *argv[])
{
	solve();

	return 0;
}