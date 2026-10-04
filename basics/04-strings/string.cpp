/* created by aliencatkitty
 this code is to show strings in C++
 and document my progress learning C++ */

#include <iostream>
#include <string>
using namespace std;
int main() {
    string text="hai";
    cout << "initial value is " << text << endl;
    getline(cin, text);
    //getline gets the entire line, cin is like an input, text is the variable that will store it
    cout << "the value is " << text << endl;
}