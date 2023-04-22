#include <iostream>
using namespace std;

void ReadNumber(int &number)
{
    while (true)
    {
        cout << "Please enter a positive integer:\n";
        cin >> number;
        
        if (number > 0)
        {
            break;
        }
        else
        {
            cout << "Invalid input. Please enter a positive integer:\n";
        }
    }
}

int calculateSumOfOddNumbers(int number)
{
    int sum = 0;
    int currentNumber = 0;
    
    while (currentNumber <= number)
    {
        if (currentNumber % 2 != 0)
        {
            sum += currentNumber;
        }
        
        currentNumber += 1;
    }
    
    return sum;
}

int main()
{
    int n;
    ReadNumber(n);
    int sum = calculateSumOfOddNumbers(n);
    cout << "The sum of odd numbers from 0 to " << n << " is " << sum << ".\n";
    return 0;
}