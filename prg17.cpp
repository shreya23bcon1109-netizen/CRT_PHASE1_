/*that takes student percentage between 0 to 100 as input and calculates their grades based on folllowing
90 and above a
80-89 B
70-79 C 
60-69 D
BELOW 60-FAIL*/  

#include <iostream>
using namespace std;


int main() {
    float percentage;

    cout << "Enter student percentage: ";
    cin >> percentage;

    if (percentage < 0 || percentage > 100) {
        cout << "Invalid percentage!";
    }
    else if (percentage >= 90) {
        cout << "Grade: A";
    }
    else if (percentage >= 80) {
        cout << "Grade: B";
    }
    else if (percentage >= 70) {
        cout << "Grade: C";
    }
    else if (percentage >= 60) {
        cout << "Grade: D";
    }
    else {
        cout << "Grade: Fail";
    }

    return 0;
}