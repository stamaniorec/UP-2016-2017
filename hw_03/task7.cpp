#include <iostream>
#include <cmath>

using namespace std;

const int MAX_STRING_LENGTH = 1024;

void solve(const char* str)
{
	int names_count = 0;
	int breeds_count = 0;

	bool contains_capital = false;
	bool is_empty = true;

	int i = 0;
	while (true)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			contains_capital = true;
		}

		if (str[i] == ' ' || str[i] == '\0')
		{
			if (contains_capital)
			{
				names_count++;
			}
			else
			{
				if (!is_empty)
				{
					breeds_count++;
				}
			}

			contains_capital = false;
			is_empty = true;
		}
		else
		{
			is_empty = false;
		}

		if (str[i] == '\0')
		{
			break;
		}

		i++;
	}

	cout << names_count << "/" << breeds_count << endl;
}

int main(int argc, char const *argv[])
{
	char str[MAX_STRING_LENGTH];
	cin.getline(str, MAX_STRING_LENGTH);

	solve(str);

	return 0;
}