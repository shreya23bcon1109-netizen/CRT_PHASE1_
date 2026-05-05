//pyramid//
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size: ";
    cin>>n;

    for(int i=1; i<=n; i++){
        
        // spaces ke liye
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }

        // stars ke liye
        for(int k=1; k<=2*i-1; k++){
            cout<<"*";
        }

        cout<<endl;
    }

    return 0;
}