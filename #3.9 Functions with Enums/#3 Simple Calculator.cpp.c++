#include <iostream>
using namespace std;

enum enOperationType { OpType1 = '+', OpType2 = '-', OpType3 = '*', OpType4 = '/' };

void askForTwoNumbers(float& Num1, float& Num2, char& OpType) {
    cout << "Please enter first number:\n";
    cin >> Num1;

    cout << "Please enter second number:\n";
    cin >> Num2;

    cout << "Enter operation type (+, -, *, /):\n";
    cin >> OpType;
}

float Calculator(float Num1, float Num2, char OpType) {
    switch (OpType) {
    case '+':
        return Num1 + Num2;
    case '-':
        return Num1 - Num2;
    case '*':
        return Num1 * Num2;
    case '/':
        if (Num2 == 0) {
            cout << "Error: division by zero\n";
            return 0;
        }
        return Num1 / Num2;
    default:
        cout << "Error: invalid operation type\n";
        return 0;
    }
}

int main() 
{
    float Num1, Num2;
    char OpType;

    askForTwoNumbers(Num1, Num2, OpType);

    cout << "Result is: " << Calculator(Num1, Num2, OpType) << endl;

    return 0;
}