/*
Write a C++ program that takes an integer input representing a person's age using an else-if ladder.

1. If age is 100 or more, display:
   "Eligible to vote and in century category"

2. If age is between 18 and 99, display:
   "Eligible to vote"

3. If age is between 0 and 17, display:
   "Not eligible to vote"

4. If age is negative, display:
   "Invalid age"
*/

#include<iostream> 
using namespace std;
 int main() { 
    int age; 
    cout<<"enter your age:"; 
    cin>>age;
     if (age>=100){
        cout<<"eligible to vote and in century category.";
     }
     else if (age=18) {
        cout<<"eligible to vote";
     }
     else if(age>=18&&age<=99){
        cout<<"eligible to vote";
     }
     else if(age>=0&&age<=17){
        cout<<"not eligible to vote.";
     }
      else{
        cout<<"invalid age";
      }

      return 0; 
    }