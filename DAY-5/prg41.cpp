//function that takes a no. of coffee shots return total coffee value if one shot =30ml//

#include<iostream>
using namespace std;

int coffee(int shots){
    return shots*30;
}

int main(){
    int shots;
    cout<<"Enter shots:";
    cin>>shots;

    int result= coffee(shots);
    cout<<"total coffee:"<<result<<"ml"<<endl;
    return 0;
}