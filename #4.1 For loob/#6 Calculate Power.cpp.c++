#include <iostream>
using namespace std;

void readNumberAndPower(int& Number, int& Power)
{
	cout << "Please enter the number\n";
	cin >> Number;
	cout << "Plaese enter the power\n";
	cin >> Power;
}

int calTheFinalResult(int Number, int Power)
{
	int Counter;
	if (Power == 0)
	{
		Number = 1;
	}

	else
	{
		for (Counter = Number; Power > 1; Power--)
		{
			Number *= Counter;
		}
	}
	return Number;
}

void printResult(int Number)
{
	cout << "Result is: " << Number;
}

int main()
{
	int Number, Power;

	readNumberAndPower(Number, Power);
	Number = calTheFinalResult(Number, Power);
	printResult(Number);
	return 0;
}