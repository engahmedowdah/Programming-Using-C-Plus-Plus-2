#include <iostream>
using namespace std;

int readTheLastNumber(int& LastNumber)
{

	cout << "Please enter the last number:\n";
	cin >> LastNumber;
	return LastNumber;
}

void printNumbers(int LastNumber)
{
	for (int FirstNumber = 1; LastNumber >= FirstNumber; FirstNumber++) //Print FirstNumber to LastNumber.
	{
		cout << "Number: " << FirstNumber << "\n";
	}
}

int main()
{
	int LastNumber;

	readTheLastNumber(LastNumber);
	printNumbers(LastNumber);

	return 0;

}