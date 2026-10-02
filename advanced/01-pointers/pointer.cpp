#include <iostream>
using namespace std;
int main() {
    int n = 1;
    int* p2 = &n; //p2 store the address of n
    void* p1 = p2; //void pointer can store any type of pointer
    //if inverse then I would have to cast p1 to int* to store in p2
    *(int*)p1 = 2; //void stores but don't know the type, so I tell it
    //the value it stores
    cout << n << endl;
    cout << *p2 << endl;
    cout << *(int*)p1 << endl;
    //the address of n
    cout << p2 << endl;
    cout << p1 << endl;
    cout << &n << endl;
    //the addresses of the pointers
    cout << &p2 << endl;
    cout << &p1 << endl;
}