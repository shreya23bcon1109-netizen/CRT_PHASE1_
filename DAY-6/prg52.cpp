//copy consTRUCTOR//
#include <iostream>
using namespace std;

  class cricketers {
    string name;
    int runs;
    
    public:
    cricketers(string name , int r)
{
    this->name = name;
    runs = r;
  }
    cricketers(const cricketers &c){
        this->name = c.name;
        this->runs = c.runs;

    }
    void shows(){
        cout<<"name:"<<name<<endl;
        cout<<"runs:"<<runs<<endl;
    }
};
int main(){
    cricketers c1("virat kohli", 12000);
    c1.shows();
    cricketers c2(c1);
    c2.shows();

return 0;
}