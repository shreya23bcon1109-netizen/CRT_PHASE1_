//abstraction 
#include<iostream>
using namespace std;



class ATM{
    private:
    int pin =456;

    public:
    void accessATM (int enteredPin){
        if(enteredPin==pin){
            cout<<"access granted";
        }
            else
             cout<<"access denied";
        
    }
};
int main(){
      ATM a1;
      a1.accessATM(321);

       return  0;
}
