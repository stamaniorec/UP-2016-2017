#include <iostream>
#include <cmath>

using namespace std;

const int MAX_STRING_LENGTH = 256;

void solve(const char* str)
{
	bool mask[26] = {false};

	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			int letter_index = str[i] - 'A';
			mask[letter_index] = true;
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			int letter_index = str[i] - 'a';
			mask[letter_index] = true;
		}

		i++;
	}

	int letters_found = 0;
	for (int i = 0; i < 26; i++)
	{
		if (mask[i])
		{
			char c = i + 'a';
			cout << c;
			letters_found++;
		}
	}

	cout << endl;
	cout << letters_found << " different letters found." << endl;
}

int main(int argc, char const *argv[])
{
	char str[MAX_STRING_LENGTH];
	cin.getline(str, MAX_STRING_LENGTH);

	solve(str);

	return 0;
}