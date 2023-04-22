#include <iostream>
using namespace std;

void ReadNumberAndFoctorial(int& Number)
{
	cout << "Please enter the number:\n";
	cin >> Number;
}

int foctorialNumber(int Number)
{
	int Foctorial;

		for (Foctorial = 1; Number >= 1;Number--)
		{
			Foctorial *= Number;
		}

	return Foctorial;
}

void printResult(int Number)
{
	cout << "The Result: " << Number;
}
int main()
{
    int Number;

    ReadNumberAndFoctorial(Number);
    Number = foctorialNumber(Number);
	printResult(Number);

    return 0;
}