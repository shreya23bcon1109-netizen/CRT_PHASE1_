//friend function 

#include<iostream>
using namespace std;


class area{
    private:
    int length;
    int width;

    public:
    void setSides(int l,int w){
        length=l;
        width =w;

    }
    friend void showArea(area a);
};

void showArea(area b){
    int area = b.length * b.width;
    cout<<"area is:"<<area<<endl;
}
int main(){
    area a;
    a.setSides(5,10);
    showArea(a);
    return 0;
}