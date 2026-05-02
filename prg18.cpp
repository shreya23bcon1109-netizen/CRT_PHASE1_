/* that takes a year as input and check if it is leap year aur not divisible by 4, not divisble by 100 but divisble by 400*/
#include<iostream>
using namespace std;
int main() {  
    int year;   
     cout << "Enter a year: ";   
      cin >> year;   
       if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {       
         cout << year << " is a Leap Year."; 
   }    else {      
      cout << year << " is not a Leap Year.";  
      }    
      return 0; 
    }