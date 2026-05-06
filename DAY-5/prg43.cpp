//wapthat apply 10%discount using refernces update original bill amount and print it//

#include <iostream>
using namespace std;
void applyDiscount(float &bill){
    bill= bill-(bill*0.10);

}

int main(){
    float amount;
    cout<<"enter bill amount:";
    cin>>amount;

    cout<<"amount"<<endl;
    cin>>amount;
    applyDiscount(amount);

    cout<<"bill amount after discount:"<<amount;

    return 0;
}