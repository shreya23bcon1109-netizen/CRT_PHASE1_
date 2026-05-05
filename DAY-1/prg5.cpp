//*Takes 2 number and operator as input from user perform the corresponding arithmetic operations*//
#include <iostream>
using namespace std;

int main() {
    int a, b;
    char op;

    // Input two numbers and operator
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Enter operator (+, -, *, /, %): ";
    cin >> op;

    // Perform operation using switch
    switch(op) {
        case '+':
            cout << "Result = " << a + b;
            break;

        case '-':
            cout << "Result = " << a - b;
            break;

        case '*':
            cout << "Result = " << a * b;
            break;

        case '/':
            cout << "Result = " << a / b;
            break;

        case '%':
            cout << "Result = " << a % b;
            break;

        default:
            cout << "Invalid Operator";
    }

    return 0;
}