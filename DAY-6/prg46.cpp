//class object

#include<iostream>
using namespace std;

class student{
   public:
    string name;
    int studentClass;
    int rollNo;

    
       void display(){
        cout<<"NAME:"<<name<<endl;
        cout<<"STUDENT CLASS:"<<studentClass<<endl;
        cout<<"ROLL NO. :"<<rollNo<<endl;
       }
    };
       int main(){
        student s1;
        s1.name ="shreya";
        s1.rollNo =10;
        s1.studentClass =1109;
        s1.display();
       }

