//wap to create a student management system where we store and display student detail 1. name 2.roll no. 3.regis
4.email id 5pohone 6marks using parameterized using default constructor//

#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int rollNo;
    int regNo;
    string email;
    long long phone;
    float marks;

public:

    // Default Constructor
    Student() {
        name = "Not Available";
        rollNo = 0;
        regNo = 0;
        email = "none@gmail.com";
        phone = 0;
        marks = 0;
    }

    // Parameterized Constructor
    Student(string n, int r, int reg, string e, long long p, float m) {
        name = n;
        rollNo = r;
        regNo = reg;
        email = e;
        phone = p;
        marks = m;
    }

    // Display Function
    void display() {
        cout << "\nStudent Details" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Registration No: " << regNo << endl;
        cout << "Email ID: " << email << endl;
        cout << "Phone: " << phone << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {

    // Using Default Constructor
    Student s1;

    // Using Parameterized Constructor
    Student s2("Shreya", 101, 22045, "shreya@gmail.com", 9876543210, 89.5);

    cout << "Default Constructor Output:";
    s1.display();

    cout << "\nParameterized Constructor Output:";
    s2.display();

    return 0;
}