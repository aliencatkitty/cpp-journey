/* created by aliencatkitty
 this code is to show arrays in C++
 and document my progress learning C++ */

#include <iostream>
#include <string>
int main() {
    // arrays are a collection of data of same type
    int numbers [5] = {1, 2, 3, 4, 5};
    std::string foods [3] = {"pizza", "burger", "sushi"};
    char letters [] = {'y', 'g'};
    std::cout << numbers[3] << std::endl;
    std::cout << foods[0] << std::endl;
    std::cout << letters[0] << " <3 " << letters[1];
}