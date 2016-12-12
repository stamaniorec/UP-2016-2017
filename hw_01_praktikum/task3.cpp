#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int x;
	cin >> x;

	char lang;
	cin >> lang;
	
	switch(lang)
	{
		case 'e':
			if (x == 10)
				cout << "ten";
			if (x == 11)
				cout << "eleven";
			if (x == 12)
				cout << "twelve";
			if (x == 13)
				cout << "thirteen";
			if (x == 14)
				cout << "fourteen";
			if (x == 15)
				cout << "fifteen";
			if (x == 85)
				cout << "eighty five";
			if (x == 86)
				cout << "eighty six";
			if (x == 87)
				cout << "eighty seven";
			if (x == 88)
				cout << "eighty eight";
			if (x == 89)
				cout << "eighty nine";
			break;
		case 'f':
			if (x == 10)
				cout << "dix";
			if (x == 11)
				cout << "onze";
			if (x == 12)
				cout << "douze";
			if (x == 13)
				cout << "treize";
			if (x == 14)
				cout << "quatorze";
			if (x == 15)
				cout << "quinze";
			if (x == 85)
				cout << "quatre-vingt-cinq";
			if (x == 86)
				cout << "quatre-vingt six";
			if (x == 87)
				cout << "quatre-vingt sept";
			if (x == 88)
				cout << "quatre vingt huit";
			if (x == 89)
				cout << "quatre vingt neuf";
	}

	// Why choose when you can have both?
	// In all seriousness, two switch statements would have resulted in deep indendation,
	// while only ifs would have required to duplicate the language condition all over the place
	// OR indent further by nesting conditions which is just nasty.
	// It looks most readable to me this way.

	cout << endl;

	return 0;
}