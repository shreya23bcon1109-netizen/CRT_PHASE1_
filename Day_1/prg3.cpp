//*Write a C++ program that takes three integers input representing the sides of a triangle. Print true if the triangle is equilateral, otherwise false. Use only relational and logical operators. *//
#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    // Input three sides of the triangle
    cout << "Enter three sides of the triangle: ";
    cin >> a >> b >> c;

    // Check if all sides are equal
    cout << ((a == b) && (b == c));

    return 0;
}