// area of rectangle,square,circle using constructor overloading

#include<iostream>
using namespace std;

class area{
    public:
    int length;
    int width;

    area() {
        length =0;
        width =0;
    }

    area(int length, int w){
        this->length = length;
        width=w;

    }

    area(int s){
        length=s;
        width =s;

    }
    void show(){
        cout<<"AREA IS:"<<length*width<<endl;
    }
};
int main(){
    area a1;
    a1.show();
    area a2(4,4);
    a2.show();

    return 0;
}