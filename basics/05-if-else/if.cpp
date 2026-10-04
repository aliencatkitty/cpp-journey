/* created by aliencatkitty
 this code is to show if else in C++
 and document my progress learning C++ */

#include <iostream>
int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;
    //this is a code that show if the number is even or odd
    if (number % 2 == 0) {
        std::cout << "is even" << std::endl;
    } else { //I can also use else if for more conditions
        std::cout << "is odd" << std::endl;
    }
}