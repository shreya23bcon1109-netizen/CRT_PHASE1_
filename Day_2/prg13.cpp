//write a c++ prg that takes three distinct integer as input and find largest among them using nested condition statemnt//
#include<iostream>
using namespace std;

int main(){
    int a, b , c;
    cout << "enter three distinct integers:";
    cin >> a >> b >> c;

    if (a>b) {
        if (a>c) {
            cout << a << " is the largest number.";
        }
        else {
            cout << c << " is the largest number.";
        }
    }
    else {
        if (b > c) {
            cout << b << " is the largest number.";
        }
        else {
            cout << c << " is the largest number.";
        }
    }

    return 0;
}
