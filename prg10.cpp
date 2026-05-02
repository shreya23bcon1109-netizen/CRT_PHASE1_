//User se input lowercase or uppercase check
#include <iostream>
using namespace std;

int main() {
    char ch;

    // Input a character
    cout << "Enter a character: ";
    cin >> ch;

    // Check whether it is uppercase or lowercase
    if (ch >= 'A' && ch <= 'Z')
        cout << ch << " is an Uppercase letter.";
    else if (ch >= 'a' && ch <= 'z')
        cout << ch << " is a Lowercase letter.";
    else
        cout << ch << " is not an alphabet.";

    return 0;
}