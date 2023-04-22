#include <iostream>
using namespace std;

enum enMonths { January = 1, February = 2, March = 3, April = 4, May = 5, June = 6, July = 7, August = 8, September = 9, October = 10, November = 11, December = 12 };

void messageShowMonths()
{
	cout << "************************************\n";
	cout << "*             Months               *\n";
	cout << "************************************\n";
	cout << "(1) January\n";
	cout << "(2) February\n";
	cout << "(3) March\n";
	cout << "(4) April\n";
	cout << "(5) May\n";
	cout << "(6) June\n";
	cout << "(7) July\n";
	cout << "(8) August\n";
	cout << "(9) September\n";
	cout << "(10) October\n";
	cout << "(11) November\n";
	cout << "(12) December\n";
	cout << "************************************\n";
	cout << "Enter the month number:\n";
}

enMonths readTheMonthNumber()
{
	int theMonthNumber;
	cin >> theMonthNumber;
	return (enMonths)theMonthNumber;

}

string PrintMonth(enMonths MonthNumber)
{
	switch (MonthNumber)
	{
	case enMonths::January:
		return "January";
		break;

	case enMonths::February:
		return "February";
		break;

	case enMonths::March:
		return "March";
		break;

	case enMonths::April:
		return "April";
		break;

	case enMonths::May:
		return "May";
		break;

	case enMonths::June:
		return "June";
		break;

	case enMonths::August:
		return "August";
		break;

	case enMonths::September:
		return "September";
		break;

	case enMonths::October:
		return "October";
		break;

	case enMonths::November:
		return "November";
		break;

	case enMonths::December:
		return "December";
		break;

	default:
		return "(not month.)";
	}
}

int main()
{
	messageShowMonths();

	cout << "The month is: " << PrintMonth(readTheMonthNumber());

	return 0;
}