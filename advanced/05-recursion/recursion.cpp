#include<stdio.h>

int sum(int n) {
    if (n == 0) {
        return 0; //this is the base case to avoid loop
    }
    return n + sum(n - 1); //the function call itself
}

int main() {
    printf("%d\n", sum(11) + 1);
}