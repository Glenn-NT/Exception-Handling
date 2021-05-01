//Glenn Monie
//CIS 1202
//4/30/2021

#include<iostream>

using namespace std;

class invalidCharacterExcpeption {};
class invalidRangeException {};

//Throws exceptions for invalid rage and invalid argument
char character(char, int);

int main() {

	try {
		char x = character('A', 6);
		cout << x << endl;
	}
	catch (invalidCharacterExcpeption)
	{
		cout << "Error invalid character\n";
	}
	catch (invalidRangeException)
	{
		cout << "Error invalid range\n";
	}

	system("Pause");
	return 0;
}

char character(char start, int offset) {

	char target;//to hold target char
	int charCase = 0;

	//check if start is a letter
	if (!isalpha(start))
		throw invalidCharacterExcpeption();

	if (islower(start))
		charCase = 1;
	else if (isupper(start))
		charCase = 2;

	switch (charCase)
	{
		//lower case
	case 1: target = start + offset;
		if (islower(target))
			return target;
		else
			throw invalidRangeException();
		break;
		//upper case
	case 2: target = start + offset;
		if (isupper(target))
			return target;
		else
			throw invalidRangeException();
	}
	
}