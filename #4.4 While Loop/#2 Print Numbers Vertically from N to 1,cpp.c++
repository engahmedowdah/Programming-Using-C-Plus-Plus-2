#include <iostream>
using namespace std;

void ReadNumber(int &number)
{
    cout << "Please enter a positive integer:\n";
    cin >> number;
    
    while (number <= 0)
    {
        cout << "Invalid input. Please enter a positive integer:\n";
        cin >> number;
    }
}

void printNumberTo1(int number)
{
    for(int i = number; i >= 1; i--)
    {
        cout << "Number: " << i << "\n";
    }
}

int main()
{
    int n;
    ReadNumber(n);
    cout << "***************************\n";
    printNumberTo1(n);
    return 0;
}