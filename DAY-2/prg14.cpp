/* write a c++ prpgram that takes 2 integer as a input from user find max of 2 using ternary conditonal statment*/
#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "The largest number is: " << ((a > b) ? a : b);

    return 0;
}
