//inheritance//

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
    public :
    int age;
    void setAge(int a) 
    {
        age = a;
    }
    void show(){
        cout<<"name:"<<name<<endl;
        cout<<"age:"<<age<<endl;
    }
};
int main(){
  int a;
  cin>>a;
  cricketers c1;45
  c1.setName("dhoni");
  c1.setAge(a);
  c1.show();
  
  return 0; 
}