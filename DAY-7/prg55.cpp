//multiple inheritance

#include<iostream>
using namespace std ;

class player {
public:
    string name;
    void setName(string n){
    name = n;
    }
};

class cricketer {
    public :
    int age;
    void setAge(int a){
        age = a;
    }
};

class IndianCricketer: public player, public cricketer{
    public: 
    string state;
    void setState(string s){
        state = s;
    }
        void show(){
        cout<<"name:"<<name<<endl;
        cout<<"age:"<<age<<endl;
        cout<<"state:"<<state<<endl;
    }
    
}; 

int main(){
    string n;
    cin>>n;
    int a;
    cin>>a;
    string s;
    cin>>s;

    IndianCricketer c1;
    c1.setName(n);
    c1.setAge(a);
    c1.setState(s);
    c1.show();

    return 0;
}