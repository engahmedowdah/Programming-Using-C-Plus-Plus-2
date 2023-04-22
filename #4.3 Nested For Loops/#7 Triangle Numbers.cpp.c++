#include <iostream>
using namespace std;

int main()
{
    for (int FirstNumber = 1; FirstNumber <= 10; FirstNumber++)
    {
        for (int LastNumber = FirstNumber; LastNumber <= 10; LastNumber++)
        {
            cout << LastNumber << " ";
        }
        cout << endl;
    }

    return 0;
}