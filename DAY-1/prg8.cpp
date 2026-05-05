//2 variable constant for username and password 
#include <iostream>
using namespace std;

int main() {
    const string USERNAME = "admin";
    const string PASSWORD = "12345";

    string username, password;

    // Input from user
    cout << "Enter Username: ";
    cin >> username;

    cout << "Enter Password: ";
    cin >> password;

    // Check username and password
    if (username == USERNAME && password == PASSWORD)
        cout << "Valid Login";
    else
        cout << "Invalid Login";

    return 0;
}