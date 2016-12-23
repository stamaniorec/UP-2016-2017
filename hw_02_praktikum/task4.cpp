#include <iostream>
#include <cstring>

using namespace std;

const int MAX_STRING_SIZE = 256;

void replaceOccurences(char* str, char charToReplace, char* stringToReplaceWith)
{
	int str_length = strlen(str);
	int replacement_length = strlen(stringToReplaceWith);

	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == charToReplace)
		{
			if (replacement_length == 0)
			{
				for (int j = i; j < str_length - 1; j++)
				{
					str[j] = str[j + 1];
				}
			}
			else
			{
				for (int j = str_length - 1; j > i; j--)
				{
					str[j + replacement_length - 1] = str[j];
				}
			}
			
			str[str_length - 1 + replacement_length] = '\0';

			for (int j = 0; j < replacement_length; j++)
			{
				str[i + j] = stringToReplaceWith[j];
			}

			if (replacement_length == 0)
			{
				str_length--;
			}
			else
			{
				i += replacement_length;
				str_length += replacement_length;
			}
		}
		else
		{
			i++;
		}
	}

}

int main(int argc, char const *argv[])
{
	char str[MAX_STRING_SIZE];
	strcpy(str, "Merry Christmas!");
	replaceOccurences(str, 'r', "Hohoho");
	cout << str << endl;

	// strcpy(str, "Heppy new year!");
	// replaceOccurences(str, 'e', "");
	// cout << str << endl;

	return 0;
}