//find the fibonacci sequence btetween 1 to n //

#include<iostream>
using namespace std;

int main(){
    int n,a=0,b=1,c;
    cout<<"enter the value of n:";
    cin>>n;

    cout<<"fibonacci sequence between 1 and"<<n<<"is :";

    while(a<=n){
        if(a>=1)
        cout<<a<<" ";

        c=a+b;
        a=b;
        b=c;

    }
    return 0;
}