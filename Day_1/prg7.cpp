//*Takes 3 integer as input from the user calculate their total sum and average and print them*//
#include <iostream>
using namespace std;

int main() {
    int a, b, c, sum;
    float average;

    // Input three integers
    cout << "Enter three integers: ";
    cin >> a >> b >> c;

    // Calculate sum
    sum = a + b + c;

    // Calculate average
    average = sum / 3.0;

    // Display result
    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;

    return 0;
}