#include <iostream>
using namespace std;

int main()
{
    short number;
    short arr[10] = { 10, 20, 44, 55, 33, 22 ,99 ,88, 99 ,100 };

    for (number = 0; number < 10; number++)
    {
        cout << "Iteration #" << number << ": " << arr[number] << endl;

        if (arr[number] == 22)
        {
            cout << "Value 22 found at index " << number << "." << endl;
            break;
        }
    }

    return 0;
}
