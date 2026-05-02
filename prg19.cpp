//*wap that takes a single alphabet character from the user whether it is vowel or consonant*/
#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"ENTER AN ALPHABET:";
    cin>>ch;


    switch (ch) {
        case 'A': ch = 'a'; break;
        case 'E': ch = 'e'; break;
        case 'I': ch = 'i'; break;
        case 'O': ch = 'o'; break;
        case 'U': ch = 'u'; break;
    }

    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout << ch << " is a vowel.";
            break;

        default:
            cout << ch << " is a consonant.";
    }

     return 0;
}