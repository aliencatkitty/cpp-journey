#include <iostream>
using namespace std;
//I use void when I don't want to return anything
int sum(int a, int b, int c) {
    return a + b + c;
}
int main() {
    int a = 10, b = 20, c = 37;
    cout << sum(a, b, c) << endl;
}