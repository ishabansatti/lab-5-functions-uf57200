
#include <iostream>
using namespace std;


int multiply(const int &a, const int &b);

int main() {
    int num1 = 18, num2 = 73;

    int result = multiply(num1, num2);

    cout << endl<< "Product of "<<num1<<" and "<<num2<< " = " << result << endl;

    return 0;
}


int multiply(const int &a, const int &b) {
    return a * b;
}