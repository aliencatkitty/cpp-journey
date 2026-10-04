/* created by aliencatkitty
 this code is to show functions in C++
 and document my progress learning C++ */

#include <iostream>
using namespace std;
int sum(int a, int b, int c) {
    return a + b + c; //I use return to give back the value
}
//void doesn't return anything
void printSum(int a, int b, int c) {
    cout << a + b + c << endl; //I use cout to show
}
int main() {
    int a = 10, b = 20, c = 37;
    cout << sum(a, b, c) << endl; //return only returns, so, I have to use cout to show it
    printSum(a, b, c); //cout is already being used in the function
}