
#include <iostream>
using namespace std;

int main() {
    int x = 12, y = 54;

 auto calculate = [x, y]() {
        cout <<endl<< "Sum = " << x + y << endl;
        cout << "Product = " << x * y << endl;
    };
    calculate();

    return 0;
}