//write a func. that takes a length and width as a input return print the area of rectangle// 

#include<iostream>
using  namespace std;

int areaRectangle(int length, int width){
    return length*width;
}
 int main(){

    int l,w;
    cout<<"enter length and width:";
    cin>>l>>w;

    int area = areaRectangle(l,w);
    cout<<"area of rectangle are"<<area;

    return 0;
 }