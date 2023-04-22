#include <iostream>
using namespace std;

int main()
{

	for (int printStarsInLoop = 1; printStarsInLoop <= 10 ; printStarsInLoop++)
	{

		for (int printLinesInLoop = 10; printLinesInLoop >= printStarsInLoop; printLinesInLoop--)
		{
			cout << '*';

		}
		cout << endl;
	}


	return 0;
}