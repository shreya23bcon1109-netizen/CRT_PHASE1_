//static member

#include<iostream>
using namespace std ;


class employee{
    public:
    static int reg_no;
    static  void show(){
        cout<<"employee registration is:"<<reg_no;
    }
};

int employee ::reg_no=100;
int  main ()
{
employee e1;
employee e2;
employee e3;
employee e4;

employee :: show();
}