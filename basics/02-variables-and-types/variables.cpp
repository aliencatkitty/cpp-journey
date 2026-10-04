/* created by aliencatkitty
 this code is to show variables and types in C++
 and document my progress learning C++ */

#include <iostream>
#include <string>
//variables outside main are global
typedef int inteiro;
inteiro a = 10, b = 20;
double c = 37.9;
//I don't have to use std if I use "using namespace std"
std::string comida = "pizza";
int main() {
    //variables inside main are local only
    enum dia {segunda, terca, quarta, quinta, sexta};
    dia hoje = quinta;
    std::cout << "a + b + c: " << a + b + c << "\n";
    //I can put "\n" instead of endl
    std::cout << hoje << std::endl;
    std::cout << comida;
}