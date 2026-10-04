/* created by aliencatkitty
 this code is to show reference arguments in C++
 and document my progress learning C++ */

#include <stdio.h>
//I'm using prinf from <stdio.h> so I don't need to use std

void addone (int &n) {
    //it increase the value of n by 1, and not just return a value and already gets the address
    n++;
}
struct point {
    int x;
    int y;
    char * name;
};
void move(point * p) {
    //two ways to do the same thing
    (*p).x++;
    p->y++;
}
int main() {
    int n = 6;
    printf("Before: %d\n", n);
    addone(n);
    printf("After: %d\n", n);
    point p1 = {6, 7};
    //char * is a pointer to char, I can use it to store a string
    p1.name = "point 1";
    printf("%s\n", p1.name);
    printf("Before: %d, %d\n", p1.x, p1.y);
    move(&p1);
    printf("After: %d, %d\n", p1.x, p1.y);
}