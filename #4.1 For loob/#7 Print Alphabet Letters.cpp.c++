#include <iostream>
using namespace std;

char printAsciiLetters(char &Letters)
{
	for ( Letters = 'a'; Letters <= 'z'; Letters++)
	{	
		if (Letters != 'l')
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