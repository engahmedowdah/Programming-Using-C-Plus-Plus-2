#include <iostream>
using namespace std;

char printAsciiLetters(char &Letters)
{
	for ( Letters = 'A'; Letters <= 'Z'; Letters++)
	{	
		if (Letters != 'L')
		{
			cout << Letters << "\n";
		}

		else
		{
			cout << Letters << "\n";
		}
	}
	return Letters;
}

int main()
{
	char ASCII;
	printAsciiLetters(ASCII);
	return 0;
}