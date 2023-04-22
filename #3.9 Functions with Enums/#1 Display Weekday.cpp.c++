#include <iostream>
using namespace std;

enum enWeekDay { Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thu = 5, Fri = 6, Sat = 7 };

void ShowDaysOfWeek()
{
	cout << "************************************\n";
	cout << "*               Day                *\n";
	cout << "************************************\n";
	cout << "* (1) Sunday                       *\n";
	cout << "* (2) Monday                       *\n";
	cout << "* (3) Tuesday                      *\n";
	cout << "* (4) Wednesday                    *\n";
	cout << "* (5) Thursday                     *\n";
	cout << "* (6) Friday                       *\n";
	cout << "* (7) Saturday                     *\n";
	cout << "************************************\n";
}

enWeekDay ReadWeekDays()
{
	int WeekD;
	cin >> WeekD;
	return enWeekDay(WeekD);
}

string printWeekDayNumber(enWeekDay WeekDay)
{
	switch (WeekDay)
	{
	case enWeekDay::Sun:
		return "Sunday";
		break;

	case enWeekDay::Mon:
		return "Monday";
		break;

	case enWeekDay::Tue:
		return "Tuesday";
		break;

	case enWeekDay::Wed:
		return "Wednesday";
		break;

	case enWeekDay::Thu:
		return "Thursday";
		break;

	case enWeekDay::Fri:
		return "Friday";
		break;

	case enWeekDay::Sat:
		return "Saturday";
		break;

	default:
		return "not a week day!";
	}
}

int main()
{
	ShowDaysOfWeek();

	cout << "Today is: " << printWeekDayNumber(ReadWeekDays());
	return 0;
}