//To develop a C++ program to check whether a person is eligible for a discount if their age is 16 or below, or 65 and above.
#include <iostream>
using namespace std;

int main() {
    int age;

    // Input age from user
    cout << "Enter your age: ";
    cin >> age;

    // Check discount eligibility
    if (age <= 16 || age >= 65)
        cout << "You are eligible for a discount.";
    else
        cout << "You are not eligible for a discount.";

    return 0;
}