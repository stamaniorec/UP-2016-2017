#include <iostream>
#include <cmath>

using namespace std;

const int MAX_STRING_LENGTH = 256;

void containsAndPrint(const char* str, char character)
{
	int i = 0;
	bool should_print = false;
	while (str[i] != '\0')
	{
		if (str[i] == character)
		{
			cout << character << " found at position " << (i + 1) << endl;
			should_print = true;
		}

		if (should_print)
		{
			cout << str[i];
		}

		i++;
	}

	if (!should_print)
	{
		cout << character << " not found in the string.";
	}

	cout << endl;
}

int main(int argc, char const *argv[])
{
	char str[MAX_STRING_LENGTH];
	cin.getline(str, MAX_STRING_LENGTH);

	char character;
	cin >> character;

	containsAndPrint(str, character);

	return 0;
}