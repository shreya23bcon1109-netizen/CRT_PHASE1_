#include<iostream>
using namespace std;

 class Student{
    public:
    string name;
    int rollNo;
//default constructor
    Student(){
        name="SREYA";
        rollNo =10;
    }
//print
    void show(){
        cout<<"NAME:"<<name<<endl;
        cout<<"ROLL NO:"<<rollNo<<endl;
        cout<<"default constructor is called"<<endl;
    }
 };

 int main(){
    Student s1;
    s1.show();

    return 0;
 }