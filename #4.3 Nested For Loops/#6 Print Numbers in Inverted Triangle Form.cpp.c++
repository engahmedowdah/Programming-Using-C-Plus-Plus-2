#include <iostream>
using namespace std;

int main()
{
int LastNumber;
for (int FirstNumber = 0; FirstNumber <= 9; FirstNumber)
{
FirstNumber += 1;
for (LastNumber = FirstNumber; LastNumber <= 10; LastNumber++)
{
cout << LastNumber << " ";
}

	cout << endl;
}

return 0;
}