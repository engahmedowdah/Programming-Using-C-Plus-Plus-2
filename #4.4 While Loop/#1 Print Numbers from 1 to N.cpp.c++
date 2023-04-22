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

int printNumberTo1(int number)
{
    while (number >= 1)
    {
        cout << "Number: " << number << "\n";
        number--;
    }
    return number;
}

int main()
{
    int n;
    ReadNumber(n);
    cout << "***************************\n";
    int next_number = printNumberTo1(n);
    cout << "Next number: " << next_number << "\n";
    return 0;
}