//*```Write a C++ program that declares a global integer variable initialized to 100 in the main function. Take an integer input from the user, perform floating-point division of the global variable by the user input using explicit typecasting, store it in a local double variable, and print the result. *//
#include <iostream>
using namespace std;

// Global variable
int num = 100;

int main() {
    int divisor;
    double result;

    cout << "Enter an integer: ";
    cin >> divisor;

    // Explicit typecasting for floating-point division
    result = (double)num / divisor;

    cout << "Result after division = " << result << endl;

    return 0;
}
