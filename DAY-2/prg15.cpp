/*
Write a C++ program that takes an integer as input
and prints all numbers from 1 to n,
but skips any number that is a multiple of 3
using the continue statement.
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;

     for (int i = 1; i <= n; i++) {
        if (i % 3 == 0) {
            continue;  
        }
       else{
        cout << i << " ";
    }
     }
    return 0;
}
