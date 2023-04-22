#include <iostream>
#include <limits>
using namespace std;

int readATMPinDoWhile(int &atmCode)
{
    const int PIN_CODE = 1234;
    float balance = 7500;
    int failedCounter = 0;

    do
    {
        cout << "Please enter the ATM code:\n";
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
            if (failedCounter == 3)
            {
                cout << "Card locked.\n";
                break;
            }
            else
            {
                cout << "Incorrect PIN. Please re-enter:\n";
            }
        }
    } while (failedCounter < 3);

    return atmCode;
}

int main()
{
    int atmCode = 0;
    atmCode = readATMPinDoWhile(atmCode);
    cout << "ATM code entered: " << atmCode << "\n";

    return 0;
}