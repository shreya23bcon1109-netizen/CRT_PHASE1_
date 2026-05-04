/*wap that takes input from user print all the numbers between 1to n which is divisible by 2*/
#include<iostream>
using namespace std;

int main(){
int n;

cout<<"Enter a number:";
cin>>n;

cout<<"number divisible by 2 "<<n<< "are:";

for(int i=1;i<=n;i++){
    if(i%2==0){
        cout<<i<<" ";
    }
}
return 0;
}