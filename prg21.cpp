/*wap that  simulates atm withdrawl system the prg should take withdrawl amount as a input and determine wheater the transaction is valid or not are not 0 dsaily limiit balance check*/
#include<iostream>
using namespace std;

int main(){
    double balance =50000;
    double dailylimit=20000;
    double amount;

    cout<<"enter withdrawl amount:";
    cin>>amount;

    if(amount <=0){
        cout<<"invalid amount! check your amount.";
    }
     
    else if(amount>dailylimit){
        cout<<"transaction declined! reaching daily limit.";
    }

    else if(amount>balance){
        cout<<"insufficient balance.";
    }

    else{
        balance = balance-amount;
        cout<<"transaction successfully!"<<endl ;
        cout<<"please collect your cash."<<endl ;
        cout <<"remaining balance: rs. "<<balance;
    }
    return 0; 
}