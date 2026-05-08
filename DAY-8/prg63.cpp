#include <iostream>
using namespace std;

namespace virat{
    void show(){
        cout<<"he is the part of rcb"<<endl;
    }
}
    namespace rohit{
        void show(){
            cout<<"he is the part of mi"<<endl;
        }
    }
int main(){
    virat::show();
    rohit::show();
    return 0;
}