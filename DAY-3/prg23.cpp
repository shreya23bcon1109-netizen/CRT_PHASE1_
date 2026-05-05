/*wap that takes input from user print all the numbers between 1to n which is divisible by 2in while loop*/
#include<iostream>
using namespace std;
int main(){
    int n,i=1;
    cout<<"enter a number :";
    cin>>n;

  cout<<"number divisible by 2 "<<n<< "are:";

    while(i <=n){
        if(i%2==0){

    cout<<i<<" ";
    }
    i++;
}  
    return 0;
}