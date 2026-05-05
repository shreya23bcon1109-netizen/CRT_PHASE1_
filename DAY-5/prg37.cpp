//argument with return value//

#include<iostream>
using namespace std;
int add(int a,int b){
    return a+b;
}

int main(){
    int sum = add(1,4);
    cout<<sum<<endl;
}