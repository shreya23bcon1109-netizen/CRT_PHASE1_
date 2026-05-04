/*wap that takes positive inyteger m as a input from a user then calculate it factorial using for loop*/
#include<iostream>
using namespace std;
 
int main(){
    int m ;
    long long factorial=1;
    cout<<"Enter your number:";
    cin>>m;

    for(int i=1;i<=m;i++){
      factorial = factorial*i ; 
    }
      cout << "Factorial of " << m << " is: " << factorial;

      return 0;
}