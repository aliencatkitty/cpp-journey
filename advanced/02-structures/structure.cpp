#include <iostream>
#include <string>
using namespace std;
struct bunny { //I can store coherent data, so it's different from a array that is only the same data
    string name;
    int age;
    string race;
};
int main() {
    bunny b1;
    b1.name = "pudim";
    b1.age = 2;
    b1.race = "holland lop";
    bunny b2;
    b2.name = "pipoca";
    b2.age = 1;
    b2.race = "mini lop";
    cout << "bunny 1: " << b1.name << " " << b1.age << " " << b1.race << endl;
    cout << "bunny 2: " << b2.name << " " << b2.age << " " << b2.race << endl;
    cout << "bunny bunny bunny bunny bunny bunny bunny bunny";
}