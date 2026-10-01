#include <iostream>
int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;
    if (number % 2 == 0) {
        std::cout << "is even" << std::endl;
    } else {
        std::cout << "is odd" << std::endl;
    }
}