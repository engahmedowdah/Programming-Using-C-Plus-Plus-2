#include <iostream>
using namespace std;

void ReadNumber(int &factorial)
{
    while (true)
    {
        cout << "Please enter a positive integer for factorial:\n";
        cin >> factorial;
        
        if (factorial >= 0)
        {
            break;
        }
        else
        {
            cout << "Invalid input. Please enter a positive integer:\n";
        }
    }
}

int calculateFactorial(int n)
{
    int factorial = 1;
    
    while (n > 1)
    {
        factorial *= n;
        n -= 1;
    }
    
    return factorial;
}

int main()
{
    int n;
    ReadNumber(n);
    int factorial = calculateFactorial(n);
    cout << "The factorial of " << n << " is " << factorial << ".\n";
    return 0;
}