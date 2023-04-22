#include <iostream>
using namespace std;

int main()
{
	for (int lastNumber = 1; lastNumber <= 10; lastNumber++)
	{
		for (int firstNumber = 1; firstNumber <= lastNumber; firstNumber++)
		{
			cout << firstNumber << " ";
		}
		cout << "\n";
	}
	return 0;
}