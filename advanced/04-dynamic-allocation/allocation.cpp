#include <stdio.h>

int main() {
    int *p = new int; //allocate memory for an int in heap
    *p = 67; //put value in the allocated memory
    printf("%d\n", *p); //print the value
    delete p; //free the allocated memory

    //for arrays:
    int *arr = new int[5]; //allocate memory but for a array
    arr[0] = 67;
    printf("%d\n", arr[0]);
    delete[] arr; //we use delete[] for arrays
}