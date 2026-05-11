//string 
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string str1="hello";
    string str2="jecrc";

    cout<<str1<<" "<<str2<<endl;

    // 1. length
    int n = str1.length();
    cout<<"length of string is: "<<n<<endl;

    // 2. append
    cout<<"after appending string: "<<str1.append(" students")<<endl;

    // 3. empty
    cout<<"is string empty: "<<str2.empty()<<endl;

    // 4. concatenation
    cout<<"after concatenation: "<<str1 + "baccho"<<endl;
    cout<<"after concatenation (2): "<<str1<<endl;

    // 5. push_back
    str2.push_back('U');
    cout<<"after push_back(): "<<str2<<endl;

    // 6. pop_back
    str2.pop_back();
    cout<<"after pop_back(): "<<str2<<endl;

    // 7. find
    int index = str1.find("ello");
    cout<<"index of 'ello' in str1: "<<index<<endl;

    // 8. swap
    str1.swap(str2);
    cout<<"after swapping:"<<endl;
    cout<<"str1: "<<str1<<endl;
    cout<<"str2: "<<str2<<endl;

    // 9. substr
    string sub = str2.substr(0, 3);
    cout<<"substring of str2: "<<sub<<endl;

    // 10. getline
    string str3;
    getline(cin, str3);
    cout<<"you entered: "<<str3<<endl;

    return 0;
}