#include <iostream>
using namespace std;
int main()
{
	short Number, Sum = 0;

	for (short N = 1; N <= 5; N++)
	{
		cout << "Enter a number :\n";
		cin >> Number;

		if (Number >= 50)
		{
			cout << "Number is greater than or equal to 50. Skipping...\n";
			continue;
		}

		Sum += Number;
	}

	cout << "Total is: " << Sum << "\n";

	return 0;
}