#include <iostream>
#include <string>
using namespace std;

struct strInfo
{
	string HisFirstName;
	string HisLastName;
	unsigned short HisAge;
	string HisPhone;
};

void ReadInfo(strInfo& Info)
{
	cout << "Please enter FirstName:\n";
	cin.ignore();
	getline(cin, Info.HisFirstName);

	cout << "Please enter LastName:\n";
	cin.ignore();
	getline(cin, Info.HisLastName);

	cout << "Please enter age:\n";
	cin >> Info.HisAge;

	cout << "Please enter phone:\n";
	cin >> Info.HisPhone;

	cout << "****************************\n";
}

void PrintInfo(strInfo Info)
{
	cout << "\n****************************\n";

	cout << "First Name: " << Info.HisFirstName << "\n";
	cout << "Last Name: " << Info.HisLastName << "\n";
	cout << "Age: " << Info.HisAge << "\n";
	cout << "Phone: " << Info.HisPhone << "\n";

	cout << "****************************" << endl;
}

void ReadPersonInfo(strInfo PersonInfo[100], int& Length)
{
	cout << "Enter how often you want the array to be printed:\n";
	cin >> Length;

	for (int Arr = 0; Arr < Length; Arr++)
	{
		cout << "Please enter Person's " << Arr + 1 << "Info.\n";
		ReadInfo(PersonInfo[Arr]);
	}
}

void PrintPersonInfo(strInfo PersonInfo[100], int Length)
{
	for (int Arr = 0; Arr < Length; Arr++)
	{
		cout << "\nPerson: " << Arr + 1 << " Info.\n";
		cout << "****************************\n";
		PrintInfo(PersonInfo[Arr]);
	}
}

int main()
{
	int Length = 0, Arr[100];
	strInfo PersonInfo[100];
	ReadPersonInfo(PersonInfo, Length);
	PrintPersonInfo(PersonInfo, Length);
	return 0;
}