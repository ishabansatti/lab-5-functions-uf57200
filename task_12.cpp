
#include <iostream>
#include <string>
using namespace std;

void printType(int value) {
    cout << value << " is of type int" << endl;
}
void printType(double value) {
    cout << value << " is of type double" << endl;
}


void printType(char value) {
    cout << value << " is of type char" << endl;
}


void printType(string value) {
    cout << value << " is of type string" << endl;
}

int main() {
    printType(42);
    printType(3.14);
    printType('A');
    printType("Hello");

    return 0;
}