//*Write a c++ program that takes 2 integer input a&b multiply aby4 using bitwise left shift operator print value  */
#include <iostream>
using namespace std;

int main() {
    int a , c, result;

    // Input two integers
    cout << "Enter two integers: ";
    cin >> a >> c;

    // Multiply a by 4 using left shift operator
    result = a << 2;

    // Display the result
    cout << "Value of a multiplied by 4 is: " << result;

    return 0;
}