//write a func. with default argument and calling it whith or without parameters//
#include<iostream>
using namespace std;

void greet(string name="guest"){

cout<<"hello"<<name<<endl;
}

   int main(){
    greet("shreya");
    greet();

    return 0;
   }