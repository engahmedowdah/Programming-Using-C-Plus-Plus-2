#include <iostream>
using namespace std;

int readLastNumber(int& lastNumber)
{
	cout << "Please enter the last number you want to collect:\n";
	cin >> lastNumber;
	return lastNumber;
}

int TheSumOfNumbers(int lastNumber, int& Sum)
{
	Sum = 0;
	for (int Counter = 0; Counter <= lastNumber; Counter++)
	{
		if (Counter % 2 == 0)
		{
			Sum += Counter;
		}
	}
	return Sum;
}

void printTheSumOfNumber(int Sum)
{
	cout << "The sum of numbers: " << Sum;
}

int main()
{
	int lastNumber;
	int Sum;
	readLastNumber(lastNumber);
	TheSumOfNumbers(lastNumber, Sum);
	printTheSumOfNumber(Sum);
	return 0;
}