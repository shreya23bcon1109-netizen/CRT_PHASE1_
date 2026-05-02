//*write a c++ program that takes a person age as a input if a age is 18 or older is elgibile to vote then print it.//
#include<iostream>
using namespace std;

int main() {
    int age;
    cout<<"enter your age:";
    cin>>age;

    if(age>=18)
    cout<<"you are eligible to vote";
    else
    cout<<"you are not eligible to vote";

    return 0;
}
