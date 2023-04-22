#include <iostream>
using namespace std;

int main()
{
	for (char FirstLetter = 'A'; FirstLetter <= 'Z'; FirstLetter++)
	{
		cout << "Letter: " << FirstLetter << "\n";
		cout << "----------------------------" << endl;

		for (char SeccondLetter = 'A'; SeccondLetter <= 'Z'; SeccondLetter++)
		{

			cout << FirstLetter << SeccondLetter << "\n";
			
		}
		cout << "----------------------------" << endl;

	}

	return 0;
}