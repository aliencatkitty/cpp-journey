/* created by aliencatkitty
 this code is to show for loop in C++
 and document my progress learning C++ */

#include <iostream>
using namespace std;
int main() {
    for (int i = 0; i <= 20; i++) { //it's when I know how many times to loop
        if (i % 2 == 0) {
            cout << i << " is even" << endl;
        } else {
            cout << i << " is odd" << endl;
        }
    }
}