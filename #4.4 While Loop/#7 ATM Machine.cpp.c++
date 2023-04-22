#include <iostream>
#include <limits>
using namespace std;

int readATMPin(int &atmCode)
{
    const int PIN_CODE = 1234;
    float balance = 7500;
    int failedCounter = 0;

    while (atmCode != PIN_CODE && failedCounter < 3)
    {
        cout << "Enter ATM PIN code:\n";
        cin >> atmCode;

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a 4-digit PIN code:\n";
        }
        else if (atmCode == PIN_CODE)
        {
            cout << "Your balance is: " << balance << "\n";
            break;
        }
        else
        {
            failedCounter++;
            if (failedCounter > 2)
            {
                cout << "Card locked.\n";
                break;
            }
            else
            {
                cout << "Incorrect PIN. Please re-enter:\n";
            }
        }
    }

    return atmCode;
}

int main()
{
    int atmPin = 0;
    readATMPin(atmPin);
    cout << "ATM PIN entered: " << atmPin << "\n";

    return 0;
}