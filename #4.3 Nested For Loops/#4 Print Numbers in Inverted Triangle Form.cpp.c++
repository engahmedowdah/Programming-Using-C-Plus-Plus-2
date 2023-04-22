#include <iostream>
using namespace std;

int main()
{
	for (int lastNumber = 10; lastNumber >= 1; lastNumber--)
	{
		for (int firstNumber = 1; firstNumber <= lastNumber; firstNumber++)
		{
			cout << firstNumber << " ";
		}
		cout << "\n";
	}
	return 0;
}