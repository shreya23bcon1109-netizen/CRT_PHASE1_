// Write a C++ program that takes a temperature value in Celsius as input from users converting into Celsius to Fahrenheit.

#include <iostream>
using namespace std;

int main() {
    float celsius, fahrenheit;

    // Taking input from user
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    // Conversion formula
    fahrenheit = (celsius * 9 / 5) + 32;

    // Displaying result
    cout << "Temperature in Fahrenheit: " << fahrenheit << "°F" << endl;
67
    return 0;
}