/* created by aliencatkitty
 this code is to show reference arguments in C++
 and document my progress learning C++ */

#include <iostream>
using namespace std;
void addone (int *n) {
    //it increase the value of n by 1, and not just return a value
    (*n)++;
}
struct point {
    int x;
    int y;
};
void move(point * p) {
    //two ways to do the same thing
    (*p).x++;
    p->y++;
}
int main() {
    int n = 6;
    printf("Before: %d\n", n);
    addone(&n);
    cout << "After: " << n << endl;
    point p1 = {1, 2};
    printf("Before: %d, %d\n", p1.x, p1.y);
    move(&p1);
    printf("After: %d, %d\n", p1.x, p1.y);
}