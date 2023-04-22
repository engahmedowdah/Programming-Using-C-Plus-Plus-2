#include <iostream>
using namespace std;

int main()
{
	for (int Letter = 'A'; Letter <= 'F'; Letter++)
	{
		for (char printLetters = 'A'; printLetters <= Letter; printLetters++)
		{
			cout << printLetters << " ";

		}
		cout << "\n";
	}
	return 0;
}