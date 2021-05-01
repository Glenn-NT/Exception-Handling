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

	

	system("Pause");
	return 0;
}

char character(char start, int offset) {

	char target;//to hold target char

	//check if start is a letter
	if (!isalpha(start))
		throw invalidCharacterExcpeption();
	else
		target = start + offset;

	//checks if the rarget char is a lower or upper case letters
	if (islower(target) || isupper(target))
		return target;
	else
		throw invalidRangeException();
}