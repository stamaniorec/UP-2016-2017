#include <iostream>
#include <cmath>

using namespace std;

void displayHistogram(const char* str)
{
	int maskCounter[256] = {0};

	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			int ascii_index = str[i];
			maskCounter[ascii_index]++;
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			int ascii_index = str[i];
			maskCounter[ascii_index]++;
		}

		i++;
	}

	for (int i = 0; i < 256; i++)
	{
		if (maskCounter[i])
		{
			char c = (char)i;
			cout << c << " : " << maskCounter[i] << " times" << endl;
		}
	}
}

int main(int argc, char const *argv[])
{
	displayHistogram("Happy holidays!");

	return 0;
}