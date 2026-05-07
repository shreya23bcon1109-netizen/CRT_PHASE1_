//parameterized

#include<iostream>
using namespace std;

class Cricketers{
public:
    string name;
    int runs;
    double avg;

    //parameterized
    Cricketers(string n, int r, double a){
        name=n;
        runs = r;
        this->avg = a;
    }
        void show(){
            cout<<"NAME:"<<name<<endl;
            cout<<"RUNS:"<<runs<<endl;
            cout<<"AVERAGE:"<<avg<<endl;
        }
    };

    int main(){
        Cricketers c1("sachin",1000,50.22);
         c1.show();
    
    return 0; 

}
