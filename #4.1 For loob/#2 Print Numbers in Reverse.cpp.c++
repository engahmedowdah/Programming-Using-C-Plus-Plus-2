#include <iostream>
using namespace std;

int readTheLastNumber(int& firstNumber)
{
	cout << "Please enter the last number:\n";
	cin >> firstNumber;
	return firstNumber;
}

void PrintTheLastNumber(int firstNumber)
{
	for (int lastNumber = 1; lastNumber <= firstNumber; firstNumber--)
	{
		cout << "Number " << firstNumber << "\n";
	}
}

int main()
{
	int firstNumber;

	readTheLastNumber(firstNumber);
	PrintTheLastNumber(firstNumber);
	return 0;
}