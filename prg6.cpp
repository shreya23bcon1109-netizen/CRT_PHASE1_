//*takes  2 integer from the user swap their value using a temporary variable and print the updated value without using swap variables //
#include <iostream>
using namespace std;

int main() {
    int a, b, temp;

    // Input two integers
    cout << "Enter two integers: ";
    cin >> a >> b;

    // Swapping using temporary variable
    temp = a;
    a = b;
    b = temp;

    // Display swapped values
    cout << "After swapping:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}