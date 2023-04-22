#include <iostream>
using namespace std;

int sumOfNumbers(int &number)
{
    while (true)
    {
        cout << "Please enter a positive integer (enter -99 to stop):\n";
        cin >> number;
        
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a positive integer:\n";
        }
        else if (number == -99)
        {
            break;
        }
        else if (number < 0)
        {
            cout << "Invalid input. Please enter a positive integer:\n";
        }
        else
        {
            sum += number;
        }
    }

    return sum;
}

int main()
{
    int number, sum = 0;
    sum = sumOfNumbers(number);
    cout << "The sum of the entered numbers is " << sum << ".\n";
    return 0;
}