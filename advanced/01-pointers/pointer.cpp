#include <iostream>
using namespace std;
int main() {
    int n = 1;
    int* p2 = &n; //p2 store the address of n
    void* p1 = p2; //void pointer can store any type of pointer
    //if inverse then I would have to cast p1 to int* to store in p2
    *(int*)p1 = 2;
    cout << n << endl;
}