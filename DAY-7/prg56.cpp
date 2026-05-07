//hierarchical 
#include<iostream>
using namespace std;

class player
{
public:
    string name;
    int age;

    void setName(string n){
        name = n;
    }
};

class cricketers : public player{
public:
    int runs;

    void setRuns(int r)
    {
        runs = r;
    }

    void show(){
        cout<<"name:"<<name<<endl;
        cout<<"runs:"<<runs<<endl;
    }
};

class footballers : public player{
public:
    int goals;

    void setGoals(int g){
        goals = g;
    }

    void show(){
        cout<<"name:"<<name<<endl;
        cout<<"goals:"<<goals<<endl;
    }
};

int main(){

    cricketers c1;
    c1.setName("virat");
    c1.setRuns(1000);
    c1.show();

    footballers f1;
    f1.setName("sunil");
    f1.setGoals(87);
    f1.show();

    return 0;
}


