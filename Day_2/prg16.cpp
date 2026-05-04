/*write a c++ prg that continously takes positive integer as a input from the user and add them to running a sum variable  if users enter a negative number immediately terminate the loop using break statement */
#include<iostream>
using namespace std;

int main() {
    int num, sum = 0;

    while (true) {
        cout << "Enter a positive number : ";
        cin >> num;

        if (num < 0) {
            break;   
        }

        sum = sum + num;
    }

    cout << "Sum of entered positive numbers = " << sum;

    return 0;
}