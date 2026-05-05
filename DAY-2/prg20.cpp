/*that simulates simple customer system used in switch case statement in that menu options are 1. for support 2. for billing. 3.for technical issue 4. speak to an agent*/
#include<iostream>
using namespace std;
 
int main(){
 int choice;
  cout<<"1.for support"<<endl;
  cout<<"2.for billing"<<endl;
  cout<<"3.for technical issue"<<endl;
  cout<<"4.speak to an agent"<<endl;
  cin>>choice;

  switch(choice){
   case 1:
     cout<<"you selected support";
     break;
    case 2:
      cout<<"you selected billing";
      break;
   case 3:
      cout<<"you selected technical issue";
      break;
    case 4:
      cout<<"connecting to an agent";
      break;     

      default :
      cout<<"invalid choice! please select between 1 to 4 ";

  }   
 return 0;
  }